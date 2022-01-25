#include "GameEngine.h"

GameEngine::GameEngine()
{
	m_window.create(sf::VideoMode(600, 656), "Top Down Game 1", sf::Style::Close | sf::Style::Titlebar); //Defines the window's properties.

	m_window.setFramerateLimit(60); //establishes the frame rate limit.

			//Tile Map
	//Defines the level with an array of tile indices.
	const int level[] =
	{
		0, 1, 0, 0, 3, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0,
		0, 0, 1, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 0, 3, 3,
		0, 0, 1, 0, 0, 0, 3, 3, 3, 1, 1, 1, 1, 0, 0, 0,
		0, 0, 1, 0, 3, 3, 3, 0, 0, 0, 1, 1, 1, 0, 0, 0,
		3, 1, 1, 0, 3, 0, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1,
		3, 1, 0, 0, 3, 2, 2, 3, 0, 0, 1, 1, 1, 1, 1, 1,
		3, 1, 0, 2, 2, 2, 3, 3, 3, 0, 1, 1, 1, 0, 0, 0,
	};

	tileMap.load("graphics/tileset2.png", sf::Vector2u(32, 32), level, 16, 8);

	//Loads the player sprite.
	playerTexture.loadFromFile("graphics/player.png");
	playerSprite.setTexture(playerTexture);
	playerSprite.setPosition(250, 128);

}

void GameEngine::run()
{

	while (m_window.isOpen()) {

		//Enables user to move the player via keyboard.
		playerRight = sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
		playerLeft = sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
		playerUp = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
		playerDown = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);

		//Collision Screen
		//Right Collision
		if (playerSprite.getPosition().x < 0)
			playerSprite.setPosition(0.f, playerSprite.getPosition().y);
		//Top Collision
		if (playerSprite.getPosition().y < 0)
			playerSprite.setPosition(playerSprite.getPosition().x, 0.f);
		//Left Collision
		if (playerSprite.getPosition().x + playerSprite.getGlobalBounds().width > 513)
			playerSprite.setPosition(513 - playerSprite.getGlobalBounds().width, playerSprite.getPosition().y);
		//Bottom Collision
		if (playerSprite.getPosition().y + playerSprite.getGlobalBounds().height > 256)
			playerSprite.setPosition(playerSprite.getPosition().x, 256 - playerSprite.getGlobalBounds().height);

		void input();
		void update();
		void draw();
	}
	return;
}