-- Script Lua : changeWindowTitle.lua

-- titre de base (celui que tu veux remettre après la musique)
local defaultTitle = "Friday Night Funkin' Psych Engine"

function onSongStart()
    -- quand la chanson démarre
    if songName == "gangstabattle-dead-in-game-mix" then
        setPropertyFromClass("openfl.Lib", "application.window.title", " Mode Spécial ")
    end
end

function onEndSong()
    -- quand la chanson se termine
    setPropertyFromClass("openfl.Lib", "application.window.title", defaultTitle)
end