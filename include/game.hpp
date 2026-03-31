#ifndef HEADER_GAME
#define HEADER_GAME

#include "background.hpp"
#include "camera.hpp"
#include "file.hpp"
#include "level.hpp"
#include "monster.hpp"
#include "player.hpp"
#include "resource.hpp"
#include "weapon.hpp"
#include "window.hpp"
#include <array>
#include <raylib.h>
#include <string>
#include <vector>

// Define //

enum class GameStates { LevelComplete, ChooseUpgrade, LoadLevel, Paused, PlayerDied, Running };

// Functions //

// Game Loop
AppStates RunGame(const Window &window, const SoundArray &sounds, const TextureArray &textures,
                  Music backgroundMusic, std::string saveFile);

#endif
