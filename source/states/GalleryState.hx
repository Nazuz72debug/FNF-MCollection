package states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.system.FlxSound;
import flixel.math.FlxMath;
import Paths;
import StringTools;
import Highscore;
import states.FreeplayState;

class GalleryState extends MusicBeatState {

    // Noms des musiques cachées (bonus), exclues de la condition de déblocage.
    // Ecris-les EXACTEMENT comme le nom de chanson tel qu'il apparaît dans la week (song[0]).
    static var HIDDEN_SONGS:Array<String> = ["Criminal Targets", "Crash Out"];

    var musicInfoBG:FlxSprite;
    var musicInfoText:FlxText;

    var curCategory:String = "Images"; // "Images" ou "Music"

    // Initialisation déplacée dans create() pour éviter l'erreur de compilation
    var images:Array<GalleryImage>;
    var musics:Array<GalleryMusic>;

    // --- Système d'auteurs ---
    // Il n'y a plus de liste d'auteurs à déclarer ici : l'auteur passé à addImage()/addMusic()
    // est recherché directement dans CreditsState.creditsList (voir resolveAuthor()).
    // authorIcon / authorNameText sont juste les sprites qui affichent le résultat.
    var authorIcon:FlxSprite;
    var authorNameText:FlxText;
    var authorIconSize:Float = 64; // taille (en pixels) de l'icône d'auteur affichée en bas à droite

    var curSelected:Int = 0;

    var bg:FlxSprite;
    var imageDisplay:FlxSprite;
    var nameText:FlxText;
    var intendedColor:Int;
    var colorTween:FlxTween;

    var audioPlayer:FlxSound;

    // UI catégories
    var imagesTab:FlxText;
    var musicTab:FlxText;

    // Nouveaux éléments de barre de progression
    var progressBarBG:FlxSprite;
    var progressBar:FlxSprite;
    var timeText:FlxText;

    // Flèches de navigation gauche/droite
    var leftArrow:FlxText;
    var rightArrow:FlxText;

    override function create() {
        super.create();

        // --- Vérification de déblocage de la galerie ---
        // Si le joueur n'a pas encore complété toutes les musiques "non cachées",
        // on annule l'entrée dans la galerie et on revient au menu.
        if (!isGalleryUnlocked()) {
            FlxG.sound.play(Paths.sound('cancelMenu'));
            showLockedMessage();
            return;
        }

        // Initialisation des tableaux
        images = [];
        musics = [];

        FlxG.mouse.visible = true;

        FlxG.sound.playMusic(Paths.music("ludum_dare_prototype"), 0.8, true);

        // Même fond que celui affiché derrière le personnage dans le menu principal (mis en cache par MainMenuState)
        bg = new FlxSprite().loadGraphic(Paths.image(MainMenuState.lastBgGraphicPath));
        bg.color = 0xFF000000;
        bg.antialiasing = ClientPrefs.globalAntialiasing;
        bg.screenCenter();
        add(bg);

// Ajoute automatiquement les particules (cœurs et/ou cristaux) selon le personnage en cache
		MainMenuState.addMenuParticles(this);

        // UI catégories
        imagesTab = new FlxText(50, 20, 0, "Images", 24);
        imagesTab.setFormat(Paths.font("vcr.ttf"), 24, FlxColor.WHITE, LEFT);
        add(imagesTab);

        musicTab = new FlxText(200, 20, 0, "Music", 24);
        musicTab.setFormat(Paths.font("vcr.ttf"), 24, FlxColor.GRAY, LEFT);
        add(musicTab);

        // --- Tes données originales ---
        // addImage(nom affiché, nom du fichier, auteur (ou null), couleur, [x, y, taille du texte])
        // L'auteur est cherché automatiquement dans les crédits (CreditsState.creditsList) :
        // s'il y est trouvé, son icône et sa couleur sont utilisées automatiquement.
        addImage("Sketch of Markiplier", "conceptmark", "Dorix", 0xFFFFFFFF);
        addImage("Artwork Metal Mario", "artworkmetal", "Dorix", 0xFF919191);
        addImage("Sketch of Metal Mario Idle", "sketchmetal", "Dorix", 0xFF919191);
        addImage("Artwork Océane", "artworkthatou", "Dorix", 0xFFC200A8);
        addImage("Sketch of Océane", "sketchthatou", "Thatou", 0xFFFFFFFF);
        addImage("Originally, Metal Reflection had a percentage system inspired by the original Super Smash Bros.\nWhen the opponent sang, our percentage would increase.\nIf the player had 300%, he would die.\nA good accuracy would reduce the received percentage.\nThe mechanic ended up being scrapped, as it seemed too complex and poorly balanced.", "metalconcept", null, 0xFFFFFFFF, 0, 575, 17);
        addImage("?", "placeholder", null, 0xFFFFFFFF);

        addMusic("Concept_Starlight.ogg", "tes", "Nanza");
        addMusic("Concept_TrickorTreating.ogg", "dokis", "Nanza");
        addMusic("Old_GameOver.ogg", "gameoverold", "Dorix");
        addMusic("Old_NewGame.ogg", "newgame", "TechnoBoy Musics");

        imageDisplay = new FlxSprite(0, 0);
        imageDisplay.antialiasing = true;
        imageDisplay.screenCenter();
        add(imageDisplay);

        nameText = new FlxText(0, FlxG.height - 80, FlxG.width, "", 32);
        nameText.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER);
        add(nameText);

        // Icône + nom de l'auteur détecté, affichés à côté du titre de l'image
        authorIcon = new FlxSprite();
        authorIcon.visible = false;
        add(authorIcon);

        authorNameText = new FlxText(0, 0, 0, "", 24);
        authorNameText.setFormat(Paths.font("vcr.ttf"), 24, FlxColor.WHITE, LEFT);
        authorNameText.visible = false;
        add(authorNameText);

        musicInfoBG = new FlxSprite(0, FlxG.height - 26).makeGraphic(FlxG.width, 26, 0xFF000000);
        musicInfoBG.alpha = 0.6;
        musicInfoBG.visible = false;
        add(musicInfoBG);

        var leText:String = "Press SPACE to play/stop the music";
        musicInfoText = new FlxText(musicInfoBG.x, musicInfoBG.y + 4, FlxG.width, leText, 18);
        musicInfoText.setFormat(Paths.font("vcr.ttf"), 18, FlxColor.WHITE, CENTER);
        musicInfoText.scrollFactor.set();
        musicInfoText.visible = false;
        add(musicInfoText);

        // Barre de progression
        progressBarBG = new FlxSprite(0, FlxG.height - 100).makeGraphic(FlxG.width - 200, 20, FlxColor.BLACK);
        progressBarBG.screenCenter(X);
        progressBarBG.visible = false;
        add(progressBarBG);

        progressBar = new FlxSprite(progressBarBG.x, progressBarBG.y).makeGraphic(Std.int(progressBarBG.width), 20, FlxColor.WHITE);
        progressBar.origin.set(0, 0);
        progressBar.scale.x = 0;
        progressBar.visible = false;
        add(progressBar);

        timeText = new FlxText(0, progressBarBG.y - 50, FlxG.width, "0:00 / 0:00", 30);
        timeText.setFormat(Paths.font("vcr.ttf"), 30, FlxColor.WHITE, CENTER);
        timeText.visible = false;
        add(timeText);

        // Flèches de navigation (gauche / droite)
        leftArrow = new FlxText(20, 0, 70, "<", 64);
        leftArrow.setFormat(Paths.font("vcr.ttf"), 64, FlxColor.WHITE, CENTER);
        leftArrow.screenCenter(Y);
        leftArrow.scrollFactor.set();
        add(leftArrow);

        rightArrow = new FlxText(FlxG.width - 90, 0, 70, ">", 64);
        rightArrow.setFormat(Paths.font("vcr.ttf"), 64, FlxColor.WHITE, CENTER);
        rightArrow.screenCenter(Y);
        rightArrow.scrollFactor.set();
        add(rightArrow);

        // Petite pulsation continue pour bien indiquer que ce sont des boutons de navigation
        FlxTween.tween(leftArrow, {alpha: 0.35}, 0.7, {type: PINGPONG, ease: FlxEase.quadInOut});
        FlxTween.tween(rightArrow, {alpha: 0.35}, 0.7, {type: PINGPONG, ease: FlxEase.quadInOut});

        if (images.length > 0) changeSelection();
    }

    override function update(elapsed:Float) {
        super.update(elapsed);

        var left = controls.UI_LEFT_P;
        var right = controls.UI_RIGHT_P;
        var back = controls.BACK;
        var space = FlxG.keys.justPressed.SPACE;

        if (FlxG.mouse.justPressed) {
            var mousePos = FlxG.mouse.getWorldPosition();
            if (imagesTab.overlapsPoint(mousePos)) switchCategory("Images");
            if (musicTab.overlapsPoint(mousePos)) switchCategory("Music");

            if (leftArrow.overlapsPoint(mousePos)) {
                if (curCategory == "Images") changeSelection(-1); else changeMusicSelection(-1);
            }
            if (rightArrow.overlapsPoint(mousePos)) {
                if (curCategory == "Images") changeSelection(1); else changeMusicSelection(1);
            }
        }

        if (curCategory == "Images") {
            if (left) changeSelection(-1);
            if (right) changeSelection(1);
        } else if (curCategory == "Music") {
            if (left) changeMusicSelection(-1);
            if (right) changeMusicSelection(1);
            if (space) toggleAudio();

            // Seek interactif
            if (FlxG.mouse.justPressed && FlxG.mouse.overlaps(progressBarBG)) {
                if (audioPlayer != null && audioPlayer.length > 0) {
                    var pct:Float = FlxMath.bound((FlxG.mouse.x - progressBarBG.x) / progressBarBG.width, 0, 1);
                    var seekMs:Float = pct * audioPlayer.length;
                    audioPlayer.stop();
                    audioPlayer.play(false, seekMs);
                }
            }

            // Update barre et chrono
            if (audioPlayer != null && audioPlayer.playing) {
                progressBar.scale.x = FlxMath.bound(audioPlayer.time / audioPlayer.length, 0, 1);
                timeText.text = formatTime(audioPlayer.time) + " / " + formatTime(audioPlayer.length);
            }
        }

        if (back) {
            FlxG.sound.play(Paths.sound('cancelMenu'));
            if (FlxG.sound.music != null) FlxG.sound.music.stop();
            FlxG.sound.playMusic(Paths.music('freakyMenu'), 1, true);
            FlxG.mouse.visible = false;
            MusicBeatState.switchState(new MainMenuState());
        }
    }

    function switchCategory(cat:String) {
        curCategory = cat;
        var isMusic = (cat == "Music");

        imagesTab.color = isMusic ? FlxColor.GRAY : FlxColor.WHITE;
        musicTab.color = isMusic ? FlxColor.WHITE : FlxColor.GRAY;

        musicInfoBG.visible = isMusic;
        musicInfoText.visible = isMusic;
        progressBarBG.visible = isMusic;
        progressBar.visible = isMusic;
        timeText.visible = isMusic;

        if (cat == "Images") {
            if (audioPlayer != null) {
                FlxTween.cancelTweensOf(audioPlayer);
                audioPlayer.stop();
                audioPlayer.destroy();
                audioPlayer = null;
            }
            // Relance la musique de fond de l'onglet Images si elle n'est pas déjà lancée
            if (FlxG.sound.music == null || !FlxG.sound.music.playing) {
                FlxG.sound.playMusic(Paths.music("betamusic"), 0.8, true);
            }
            if (images.length > 0) changeSelection(0);
        } else {
            if (FlxG.sound.music != null) FlxG.sound.music.stop();
            if (musics.length > 0) changeMusicSelection(0);
        }
    }

    function addImage(name:String, path:String, ?author:String, color:Int, ?textX:Float = -1, ?textY:Float = -1, ?textSize:Int = 32) {
        images.push(new GalleryImage(name, path, author, color, textX, textY, textSize));
    }

    // Le dossier "gallery" est à la racine de assets/, pas dans assets/images/,
    // donc on ne peut pas passer par Paths.image() qui ajoute toujours "images/" devant.
    // On construit le chemin nous-même à la place.
    function galleryImagePath(key:String):String {
        return Paths.getPath('gallery/images/' + key + '.png', IMAGE);
    }

    /**
     * Fait glisser un sprite/texte depuis la gauche ou la droite vers sa position
     * finale actuelle, avec un fondu, pour donner une transition fluide lors du
     * changement d'image ou de musique.
     * dir = -1 (on vient de la gauche, on va vers la précédente)
     * dir =  1 (on vient de la droite, on va vers la suivante)
     * dir =  0 (pas d'animation, ex: premier affichage)
     */
    function slideIn(sprite:FlxSprite, dir:Int, distance:Float = 250, duration:Float = 0.35) {
        if (dir == 0) return;

        FlxTween.cancelTweensOf(sprite);

        var finalX:Float = sprite.x;
        sprite.x = finalX + (dir * distance);
        sprite.alpha = 0;

        FlxTween.tween(sprite, {x: finalX, alpha: 1}, duration, {ease: FlxEase.quintOut});
    }

    function changeSelection(change:Int = 0) {
        curSelected += change;
        if (curSelected < 0) curSelected = images.length - 1;
        if (curSelected >= images.length) curSelected = 0;

        var img = images[curSelected];
        imageDisplay.visible = true;
        imageDisplay.loadGraphic(galleryImagePath(img.path));
        imageDisplay.scale.set(0.5, 0.5);
        imageDisplay.updateHitbox();
        imageDisplay.screenCenter();

        // Petite animation de glissement pour rendre la transition plus fluide
        slideIn(imageDisplay, change);

        // --- Résolution automatique de l'auteur via les crédits ---
        var author:GalleryAuthorInfo = resolveAuthor(img.author);

        // Position et taille du texte personnalisées si définies
        if (img.textX >= 0) nameText.x = img.textX; else nameText.x = 0;
        if (img.textY >= 0) nameText.y = img.textY; else nameText.y = FlxG.height - 64;
        nameText.text = stripAuthorTag(img.name, img.author);
        nameText.setFormat(Paths.font("vcr.ttf"), img.textSize, FlxColor.WHITE, CENTER);

        // Le texte doit glisser une fois sa position finale connue (x/y et texte fixés)
        slideIn(nameText, change);

        var targetColor:Int = (author != null) ? author.color : img.color;

        if (targetColor != intendedColor) {
            if (colorTween != null) colorTween.cancel();
            intendedColor = targetColor;
            colorTween = FlxTween.color(bg, 1, bg.color, intendedColor);
        }

        updateAuthorDisplay(author);

        FlxG.sound.play(Paths.sound('scrollMenu'), 0.5);
    }

    /**
     * Affiche (ou masque) le bloc icône + nom de l'auteur détecté.
     * Ce bloc est indépendant du titre principal et reste ancré en bas à
     * droite de l'écran.
     */
    function updateAuthorDisplay(author:GalleryAuthorInfo) {
        if (author == null || author.icon == null || author.icon.length <= 0) {
            authorIcon.visible = false;
            authorNameText.visible = false;
            return;
        }

        // Charge l'icône depuis les crédits associée à cet auteur
        try {
            authorIcon.loadGraphic(creditIconPath(author.icon));
            authorIcon.setGraphicSize(Std.int(authorIconSize), Std.int(authorIconSize));
            authorIcon.updateHitbox();
            authorIcon.antialiasing = ClientPrefs.globalAntialiasing;
            authorIcon.visible = true;
        } catch (e:Dynamic) {
            // Icône introuvable : on masque simplement l'icône sans planter
            authorIcon.visible = false;
        }

        authorNameText.text = "by " + author.name;
        authorNameText.visible = true;
        authorNameText.updateHitbox();

        // --- Ancrage du bloc en bas à droite de l'écran ---
        var margin:Float = 25;
        var spacing:Float = 12;

        var iconX:Float = FlxG.width - margin - (authorIcon.visible ? authorIcon.width : 0);
        var iconY:Float = FlxG.height - margin - authorIconSize;

        if (authorIcon.visible) {
            authorIcon.setPosition(iconX, iconY);
            authorNameText.setPosition(iconX - spacing - authorNameText.width, iconY + (authorIcon.height - authorNameText.height) / 2);
        } else {
            // Pas d'icône trouvée : on affiche uniquement le nom, ancré au même endroit
            authorNameText.setPosition(FlxG.width - margin - authorNameText.width, FlxG.height - margin - authorNameText.height);
        }
    }

    /**
     * Retire un éventuel tag d'auteur restant dans le titre (ex: "(by Dorix)"),
     * au cas où il aurait été laissé dans le nom affiché. Le nom de l'auteur
     * étant maintenant fourni explicitement à addImage()/addMusic(), il n'est
     * plus affiché dans le titre principal mais uniquement dans le bloc en
     * bas à droite.
     */
    function stripAuthorTag(name:String, authorName:String):String {
        if (authorName == null || authorName.length <= 0) return name;

        var pattern = new EReg("\\(?\\s*by\\s+" + authorName + "\\s*\\)?", "i");
        var cleaned:String = pattern.replace(name, "");
        return StringTools.trim(cleaned);
    }

    // --- Résolution de l'auteur via les crédits ---

    /**
     * Recherche les infos d'un auteur (couleur, icône) directement dans
     * CreditsState.creditsList — la seule et unique source de vérité.
     * Retourne null si le nom d'auteur est vide ou introuvable dans les crédits.
     */
    function resolveAuthor(authorName:String):GalleryAuthorInfo {
        if (authorName == null || authorName.length <= 0) return null;

        var entry:Array<String> = CreditsState.findCredit(authorName);
        if (entry == null) return null;

        var icon:String = (entry.length > 1) ? entry[1] : null;
        var color:Int = (entry.length > 4) ? CreditsState.parseColor(entry[4]) : FlxColor.WHITE;

        return new GalleryAuthorInfo(entry[0], color, icon);
    }

    // Les icônes de crédits sont chargées depuis assets/images/credits/<key>.png
    // -> Ajuste ce chemin si tes icônes se trouvent ailleurs.
    // Note : sous Psych Engine 0.6.3, Paths.image() renvoie directement un
    // FlxGraphic (pas un chemin String), on garde donc le type de retour ouvert.
    function creditIconPath(key:String):flixel.graphics.FlxGraphic {
        return Paths.image('credits/' + key);
    }

    function addMusic(name:String, file:String, ?author:String) {
        var mus = new GalleryMusic(name, file, author);
        mus.durationMs = getAudioDuration(file);
        musics.push(mus);
    }

    // Charge brièvement le fichier audio pour en lire la durée (FlxSound.length),
    // puis le détruit aussitôt. Évite d'avoir à renseigner la durée à la main.
    function getAudioDuration(file:String):Float {
        var filePath:String = Paths.getPath('gallery/music/' + file + '.ogg', SOUND);
        var tempSound:FlxSound = new FlxSound().loadEmbedded(filePath, false, false);
        var length:Float = tempSound.length;
        tempSound.destroy();
        return length;
    }

    function changeMusicSelection(change:Int = 0) {
        curSelected += change;
        if (curSelected < 0) curSelected = musics.length - 1;
        if (curSelected >= musics.length) curSelected = 0;

        var mus = musics[curSelected];
        imageDisplay.visible = false;

        // --- Résolution automatique de l'auteur, comme pour les images ---
        var author:GalleryAuthorInfo = resolveAuthor(mus.author);
        nameText.text = "Music : " + stripAuthorTag(mus.name, mus.author);

        // Petite animation de glissement, comme pour les images
        slideIn(nameText, change);

        // Si un auteur est détecté, on applique aussi sa couleur de fond.
        // Sinon on ne touche pas au fond (il garde sa couleur actuelle).
        if (author != null && author.color != intendedColor) {
            if (colorTween != null) colorTween.cancel();
            intendedColor = author.color;
            colorTween = FlxTween.color(bg, 1, bg.color, intendedColor);
        }

        updateAuthorDisplay(author);

        if (audioPlayer != null) {
            FlxTween.cancelTweensOf(audioPlayer);
            audioPlayer.stop();
            audioPlayer.destroy();
            audioPlayer = null;
        }

        progressBar.scale.x = 0;
        timeText.text = "0:00 / " + formatTime(mus.durationMs);

        FlxG.sound.play(Paths.sound('scrollMenu'), 0.5);
    }

    function toggleAudio() {
        if (audioPlayer != null && audioPlayer.playing) {
            audioPlayer.pause();
            return;
        }

        if (audioPlayer != null && audioPlayer.time > 0) {
            audioPlayer.resume();
        } else {
            var mus = musics[curSelected];
            if (audioPlayer != null) { FlxTween.cancelTweensOf(audioPlayer); audioPlayer.destroy(); }
            var filePath:String = Paths.getPath('gallery/music/' + mus.file + '.ogg', SOUND);
            audioPlayer = new FlxSound().loadEmbedded(filePath, false, false);
            FlxG.sound.list.add(audioPlayer);
            audioPlayer.play();
        }
    }

    function formatTime(ms:Float):String {
        var seconds:Int = Math.floor(ms / 1000);
        var min:Int = Math.floor(seconds / 60);
        var sec:Int = seconds % 60;
        return min + ":" + (sec < 10 ? "0" + sec : "" + sec);
    }

    // ==========================================================
    //  Verrouillage de la galerie
    // ==========================================================

    /**
     * Retourne true si toutes les musiques "non cachées" (voir HIDDEN_SONGS)
     * actuellement débloquées en Freeplay ont été complétées au moins une fois
     * (un score > 0 enregistré sur au moins une difficulté).
     */
    public static function isGalleryUnlocked():Bool {
        var allSongs:Array<String> = FreeplayState.getFreeplaySongNames();

        for (songName in allSongs) {
            if (isHiddenSong(songName)) continue; // musique bonus, ignorée
            if (!isSongCompleted(songName)) return false;
        }

        return true;
    }

    static function isHiddenSong(songName:String):Bool {
        for (hidden in HIDDEN_SONGS) {
            if (StringTools.trim(songName).toLowerCase() == StringTools.trim(hidden).toLowerCase())
                return true;
        }
        return false;
    }

    /**
     * Une chanson est considérée "complétée" si un score strictement positif
     * existe pour elle sur au moins une entrée sauvegardée (peu importe la
     * difficulté), en cherchant directement dans les clés de Highscore.songScores.
     */
    static function isSongCompleted(songName:String):Bool {
        var formatted:String = Paths.formatToSongPath(songName);

        for (key in Highscore.songScores.keys()) {
            if (StringTools.startsWith(key, formatted) && Highscore.songScores.get(key) > 0)
                return true;
        }

        return false;
    }

    /**
     * Affiche un court message "galerie verrouillée" puis revient au menu principal.
     * Adapte MainMenuState par l'état depuis lequel on accède normalement à la galerie
     * si ce n'est pas le menu principal chez toi.
     */
    function showLockedMessage():Void {
        FlxG.mouse.visible = true;

        var msg:String = "Please complete all the songs tracks to access the gallery.";

        var lockedText:FlxText = new FlxText(0, 0, 560, msg, 32);
        lockedText.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER);

        var padding:Float = 30;
        var lockedBG:FlxSprite = new FlxSprite().makeGraphic(Std.int(lockedText.width + padding * 2), Std.int(lockedText.height + padding * 2), 0xFF000000);
        lockedBG.screenCenter();
        add(lockedBG);

        lockedText.screenCenter();
        add(lockedText);

        var bgTargetAlpha:Float = 0.75;
        var fadeDuration:Float = 0.25;

        lockedBG.alpha = 0;
        lockedText.alpha = 0;

        FlxTween.tween(lockedBG, {alpha: bgTargetAlpha}, fadeDuration, {ease: FlxEase.quadOut});
        FlxTween.tween(lockedText, {alpha: 1}, fadeDuration, {ease: FlxEase.quadOut});

        new flixel.util.FlxTimer().start(2.2, function(tmr:flixel.util.FlxTimer) {
            FlxTween.tween(lockedBG, {alpha: 0}, fadeDuration, {ease: FlxEase.quadIn});
            FlxTween.tween(lockedText, {alpha: 0}, fadeDuration, {
                ease: FlxEase.quadIn,
                onComplete: function(twn:FlxTween) {
                    MusicBeatState.switchState(new states.MainMenuState());
                }
            });
        });
    }
}

class GalleryImage {
    public var name:String;
    public var path:String;
    public var author:String; // nom de l'auteur, résolu automatiquement via CreditsState
    public var color:Int;
    public var textX:Float;
    public var textY:Float;
    public var textSize:Int;

    public function new(name:String, path:String, ?author:String, color:Int, textX:Float = -1, textY:Float = -1, textSize:Int = 32) {
        this.name = name;
        this.path = path;
        this.author = author;
        this.color = color;
        this.textX = textX;
        this.textY = textY;
        this.textSize = textSize;
    }
}

class GalleryAuthorInfo {
    public var name:String;
    public var color:Int;
    public var icon:String; // clé de l'icône dans assets/images/credits/

    public function new(name:String, color:Int, icon:String) {
        this.name = name;
        this.color = color;
        this.icon = icon;
    }
}

class GalleryMusic {
    public var name:String;
    public var file:String;
    public var durationMs:Float = 0; // détectée automatiquement, voir getAudioDuration()
    public var author:String; // nom de l'auteur, résolu automatiquement via CreditsState

    public function new(name:String, file:String, ?author:String) {
        this.name = name;
        this.file = file;
        this.author = author;
    }
}
