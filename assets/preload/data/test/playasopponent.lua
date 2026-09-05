-- Table des animations de chant pour éviter les appels getProperty répétitifs
local singAnims = {'singLEFT', 'singDOWN', 'singUP', 'singRIGHT'}

-- Variables menu
local menuActive = true
local selectedOption = 1
local playAsOpponent = false
local versionAChosen = false

-- --- CORRECTION 2 : Fonction utilitaire pour corriger les couleurs ---
function updateHealthBarColors(isOpponent)
    local dadR = getProperty('dad.healthColorArray[0]')
    local dadG = getProperty('dad.healthColorArray[1]')
    local dadB = getProperty('dad.healthColorArray[2]')
    local bfR = getProperty('boyfriend.healthColorArray[0]')
    local bfG = getProperty('boyfriend.healthColorArray[1]')
    local bfB = getProperty('boyfriend.healthColorArray[2]')
    
    local dadHex = string.format('%02X%02X%02X', dadR, dadG, dadB)
    local bfHex = string.format('%02X%02X%02X', bfR, bfG, bfB)
    
    -- Puisque flipX retourne la barre, on échange manuellement les couleurs pour rétablir l'ordre
    if isOpponent then
        setHealthBarColors(bfHex, dadHex)
    else
        setHealthBarColors(dadHex, bfHex)
    end
end

-- --- INIT MENU ---
function onCreate()
    makeLuaSprite('bgMenu', '', 0, 0)
    makeGraphic('bgMenu', 1280, 720, '000000')
    setProperty('bgMenu.alpha', 0.8)
    setObjectCamera('bgMenu', 'other')
    addLuaSprite('bgMenu', true)

    makeLuaText('menuTitle', 'CHOISISSEZ VOTRE VERSION', 1280, 0, 150)
    setTextSize('menuTitle', 60)
    setTextAlignment('menuTitle', 'center')
    setObjectCamera('menuTitle', 'other')
    addLuaText('menuTitle')

    makeLuaText('optA', '> Version A : Jouer le rival <', 1280, 0, 350)
    setTextSize('optA', 40)
    setTextAlignment('optA', 'center')
    setTextColor('optA', 'FFFF00')
    setObjectCamera('optA', 'other')
    addLuaText('optA')

    makeLuaText('optB', 'Version B : Normal (Boyfriend)', 1280, 0, 450)
    setTextSize('optB', 40)
    setTextAlignment('optB', 'center')
    setObjectCamera('optB', 'other')
    addLuaText('optB')
end

-- --- BLOQUER LE COUNTDOWN SI MENU ACTIF ---
function onStartCountdown()
    if menuActive then return Function_Stop end
    return Function_Continue
end

-- --- MENU NAVIGATION ---
function onUpdate(elapsed)
    if not menuActive then return end

    if keyJustPressed('up') or keyJustPressed('down') then
        playSound('scrollMenu')
        if selectedOption == 1 then
            selectedOption = 2
            setTextString('optA', 'Version A : Jouer le rival')
            setTextColor('optA', 'FFFFFF')
            setTextString('optB', '> Version B : Normal (Boyfriend) <')
            setTextColor('optB', 'FFFF00')
        else
            selectedOption = 1
            setTextString('optA', '> Version A : Jouer le rival <')
            setTextColor('optA', 'FFFF00')
            setTextString('optB', 'Version B : Normal (Boyfriend)')
            setTextColor('optB', 'FFFFFF')
        end
    end

    if keyJustPressed('accept') then
        playSound('confirmMenu')
        menuActive = false
        removeLuaSprite('bgMenu', true)
        removeLuaText('menuTitle', true)
        removeLuaText('optA', true)
        removeLuaText('optB', true)

        versionAChosen = (selectedOption == 1)
        playAsOpponent = versionAChosen

        if versionAChosen then
            setProperty('iconP1.flipX', 0)
            setProperty('iconP2.flipX', 0)
            setProperty('healthBar.flipX', 1)
            
            -- Appel de la correction des couleurs au lancement
            updateHealthBarColors(true)
            
            -- Désactiver les animations de miss automatiques de Boyfriend
            setProperty('boyfriend.hasMissAnimations', false)

            local unspawnLen = getProperty('unspawnNotes.length') - 1
            for i = 0, unspawnLen do
                local mustPress = getPropertyFromGroup('unspawnNotes', i, 'mustPress')
                setPropertyFromGroup('unspawnNotes', i, 'mustPress', not mustPress)
                setPropertyFromGroup('unspawnNotes', i, 'noAnimation', true)
            end
        end

        startCountdown()
    end
end

function onStepHit()
    if versionAChosen and curStep == 800 then
        toggleOpponentMode(false)
    end
end

-- --- TOGGLE MODE ---
function toggleOpponentMode(enable)
    playAsOpponent = enable
    local duration = 0.4

    -- Tween des flèches
    for i = 0, 3 do
        local targetX = enable and defaultPlayerStrumX0 + (i*112) or defaultOpponentStrumX0 + (i*112)
        noteTweenX('dad'..i, i, targetX, duration, 'expoOut')
    end
    for i = 4, 7 do
        local targetX = enable and defaultOpponentStrumX0 + ((i-4)*112) or defaultPlayerStrumX0 + ((i-4)*112)
        noteTweenX('bf'..i, i, targetX, duration, 'expoOut')
    end

    -- Inversion des notes sur le terrain et à venir
    local notesLen = getProperty('notes.length') - 1
    for i = 0, notesLen do
        local must = getPropertyFromGroup('notes', i, 'mustPress')
        setPropertyFromGroup('notes', i, 'mustPress', not must)
        setPropertyFromGroup('notes', i, 'noAnimation', true)
    end
    
    local unspawnLen = getProperty('unspawnNotes.length') - 1
    for i = 0, unspawnLen do
        local must = getPropertyFromGroup('unspawnNotes', i, 'mustPress')
        setPropertyFromGroup('unspawnNotes', i, 'mustPress', not must)
        setPropertyFromGroup('unspawnNotes', i, 'noAnimation', true)
    end

    -- Activer/Désactiver l'animation de miss de BF
    setProperty('boyfriend.hasMissAnimations', not enable)

    -- Inversion visuelle de la barre de vie
    if enable then
        setProperty('iconP1.flipX', 0)
        setProperty('iconP2.flipX', 0)
        setProperty('healthBar.flipX', 1)
    else
        setProperty('iconP1.flipX', 0)
        setProperty('iconP2.flipX', 0)
        setProperty('healthBar.flipX', 0)
    end
    
    -- Application de la correction des couleurs en temps réel
    updateHealthBarColors(enable)
end

-- --- POSITION DES STRUMS AU START ---
function onSongStart()
    if playAsOpponent then
        for i = 0, 3 do setPropertyFromGroup('strumLineNotes', i, 'x', defaultPlayerStrumX0 + (i*112)) end
        for i = 4, 7 do setPropertyFromGroup('strumLineNotes', i, 'x', defaultOpponentStrumX0 + ((i-4)*112)) end
    end
end

-- --- HEALTHBAR INVERSÉE (Mode Adversaire seulement) ---
function onUpdatePost()
    if not playAsOpponent then return end
 
    -- Positionnement des icônes (valeurs mises en cache pour éviter les doubles getProperty)
    local hbX = getProperty('healthBar.x')
    local hbWidth = getProperty('healthBar.width')
    local hbPercent = getProperty('healthBar.percent')
    local remapped = remapToRange(hbPercent, 0, -100, 100, 0) * 0.01
 
    setProperty('iconP1.x', -593 + hbX + (hbWidth * remapped) + (150 * getProperty('iconP1.scale.x') - 150) / 2 - 26)
    setProperty('iconP2.x', -593 + hbX + (hbWidth * remapped) - (150 * getProperty('iconP2.scale.x')) / 2 - 26 * 2)
 
    -- Correction de l'icône "mourante" : le moteur calcule nativement la frame
    -- perdante de iconP1/iconP2 selon un seuil fixe sur healthBar.percent, sans
    -- savoir que les rôles sont inversés. On échange donc les deux frames après coup.
    local p1Frame = getProperty('iconP1.animation.curAnim.curFrame')
    local p2Frame = getProperty('iconP2.animation.curAnim.curFrame')
    setProperty('iconP1.animation.curAnim.curFrame', p2Frame)
    setProperty('iconP2.animation.curAnim.curFrame', p1Frame)
end
 
function remapToRange(value, start1, stop1, start2, stop2)
    return start2 + (value - start1) * ((stop2 - start2) / (stop1 - start1))
end

-- --- GESTION DES CHANTS ET DES MISS ---
function goodNoteHit(id, direction, noteType, isSustainNote)
    setPropertyFromGroup('notes', id, 'noAnimation', true)
    local anim = singAnims[direction + 1]
    if playAsOpponent then
        characterPlayAnim('dad', anim, true)
        setProperty('dad.holdTimer', 0)
    else
        characterPlayAnim('boyfriend', anim, true)
        setProperty('boyfriend.holdTimer', 0)
    end
end

function opponentNoteHit(id, direction, noteType, isSustainNote)
    setPropertyFromGroup('notes', id, 'noAnimation', true)
    local anim = singAnims[direction + 1]
    if playAsOpponent then
        characterPlayAnim('boyfriend', anim, true)
        setProperty('boyfriend.holdTimer', 0)
    else
        characterPlayAnim('dad', anim, true)
        setProperty('dad.holdTimer', 0)
    end
end

function noteMiss(id, direction, noteType, isSustainNote)
    if playAsOpponent then
        local missAnim = singAnims[direction + 1] .. 'miss'
        characterPlayAnim('dad', missAnim, true)
        setProperty('dad.holdTimer', 0)
    end
end

-- --- CORRECTION 1 : Gérer les miss volontaires (appui dans le vide) ---
function noteMissPress(direction)
    if playAsOpponent then
        local missAnim = singAnims[direction + 1] .. 'miss'
        characterPlayAnim('dad', missAnim, true)
        setProperty('dad.holdTimer', 0)
    end
end