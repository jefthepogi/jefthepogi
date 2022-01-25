#include "GameEngine.h"

#include <SFML/Graphics.hpp>

void GameEngine::update()
{

	//Updates the player movement
	playerObject.update_PlayerMovement(playerUp, playerDown, playerLeft, playerRight);

}