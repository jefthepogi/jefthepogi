#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include "Tilemap.h"
#include "player.h"


class GameEngine
{
private:
	//Initializes Classes
	Player playerObject;
	TileMap tileMap;

	sf::Texture playerTexture;
	sf::Sprite playerSprite;

	//Window Stuff
	sf::RenderWindow m_window;

	//Player Movement Variables
	bool playerUp, playerDown, playerLeft, playerRight = false;

	//Declares functions
	void input();
	void update();
	void draw();

public:

	void ReAssign(sf::RenderWindow& m_window) {

	}


	GameEngine();

	void run();

};