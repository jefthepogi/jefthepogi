#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

class Player
{
private:


public:
	bool pFaceRight, pFaceUp, pFaceDown;
	float xpos;
	float ypos;
	float xvel;
	float yvel;

	//Constructor
	Player() {
		pFaceRight = true;
		pFaceUp = true;
		pFaceDown = false;
		xpos = 0;
		ypos = 0;
		xvel = 0;
		yvel = 0;

	}
	void update_PlayerMovement(bool playerUp, bool playerDown, bool playerLeft, bool playerRight) {
		if (playerRight) {
			pFaceRight = true;
			xvel = 2;
		}
		if (playerLeft) {
			pFaceRight = false;
			xvel = -2;
		}
		if (playerDown) {
			pFaceDown = true;
			yvel = 2;
		}
		if (playerUp) {
			pFaceUp = true;
			yvel = -2;
		}
		if (!(playerRight || playerLeft)) {
			xvel = 0;
		}
		if (!(playerUp || playerDown)) {
			yvel = 0;
		}
		xpos += xvel;
		ypos += yvel;
		//Checks if the x & y position are working.
		//std::cout << xpos << std::endl;
		//std::cout << ypos << std::endl;

	}
};
