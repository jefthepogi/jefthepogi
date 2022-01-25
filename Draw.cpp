#include "GameEngine.h"

#include <SFML/Graphics.hpp>

void GameEngine::draw()
{		

	m_window.clear(sf::Color::Black);

	m_window.draw(tileMap);

	m_window.draw(playerSprite); // Draws the player sprite.

	playerSprite.move(sf::Vector2f(playerObject.xvel, playerObject.yvel));


	m_window.display();

}