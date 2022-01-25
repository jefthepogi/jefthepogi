#include "GameEngine.h"

#include <SFML/Graphics.hpp>

void GameEngine::input()
{
	sf::Event event;
	while (m_window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			m_window.close();
		}
		//Enables player to exit the game using the Esc button.
		if (event.key.code == sf::Keyboard::Escape) {
			m_window.close();
		}
	}

}