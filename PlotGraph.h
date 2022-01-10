#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Window.hpp>
#include "TextBox.h"

//Linear Function Formula
// f(x) = 2x + 3

struct PlotGraph
{

	TextBox textboxx;


	// Y-coordinates
	sf::RectangleShape YPos1;
	sf::RectangleShape YPos2;
	sf::RectangleShape YPos3;
	sf::RectangleShape YPos4;
	sf::RectangleShape YPos5;
	sf::RectangleShape YPos6;
	sf::RectangleShape YPos7;

	// Negatives
	sf::RectangleShape YNega1;
	sf::RectangleShape YNega2;
	sf::RectangleShape YNega3;
	sf::RectangleShape YNega4;
	sf::RectangleShape YNega5;
	sf::RectangleShape YNega6;
	sf::RectangleShape YNega7;

	// Origin Point
	sf::RectangleShape Origin;

	// X-coordinates
	sf::RectangleShape XPos1;
	sf::RectangleShape XPos2;



	void PlottingPoints(sf::RenderWindow &window) {

		if (textboxx.FinalInput == true) {

			Origin.setPosition(sf::Vector2f(300, 380));
			Origin.setFillColor(sf::Color::Red);
			Origin.setSize(sf::Vector2f(10, 10));
			Origin.setOrigin(sf::Vector2f(5, 5));

			YPos1.setPosition(sf::Vector2f(300, 380 - 30 * 1));
			YPos1.setFillColor(sf::Color::Green);
			YPos1.setSize(sf::Vector2f(10, 10));
			YPos1.setOrigin(sf::Vector2f(5, 5));

			YPos2.setPosition(sf::Vector2f(300, 380 - 30 * 2));
			YPos2.setFillColor(sf::Color::Green);
			YPos2.setSize(sf::Vector2f(10, 10));
			YPos2.setOrigin(sf::Vector2f(5, 5));

			YPos3.setPosition(sf::Vector2f(300, 380 - 30 * 3));
			YPos3.setFillColor(sf::Color::Green);
			YPos3.setSize(sf::Vector2f(10, 10));
			YPos3.setOrigin(sf::Vector2f(5, 5));

			YPos4.setPosition(sf::Vector2f(300, 380 - 30 * 4));
			YPos4.setFillColor(sf::Color::Green);
			YPos4.setSize(sf::Vector2f(10, 10));
			YPos4.setOrigin(sf::Vector2f(5, 5));

			YPos5.setPosition(sf::Vector2f(300, 380 - 30 * 5));
			YPos5.setFillColor(sf::Color::Green);
			YPos5.setSize(sf::Vector2f(10, 10));
			YPos5.setOrigin(sf::Vector2f(5, 5));

			YPos6.setPosition(sf::Vector2f(300, 380 - 30 * 6));
			YPos6.setFillColor(sf::Color::Green);
			YPos6.setSize(sf::Vector2f(10, 10));
			YPos6.setOrigin(sf::Vector2f(5, 5));

			YPos7.setPosition(sf::Vector2f(300, 380 - 30 * 7));
			YPos7.setFillColor(sf::Color::Green);
			YPos7.setSize(sf::Vector2f(10, 10));
			YPos7.setOrigin(sf::Vector2f(5, 5));

			///////////////////////////////////////////////////////////////////////

			YNega1.setPosition(sf::Vector2f(300, 380 + 30 * 1));
			YNega1.setFillColor(sf::Color::Green);
			YNega1.setSize(sf::Vector2f(10, 10));
			YNega1.setOrigin(sf::Vector2f(5, 5));

			YNega2.setPosition(sf::Vector2f(300, 380 + 30 * 2));
			YNega2.setFillColor(sf::Color::Green);
			YNega2.setSize(sf::Vector2f(10, 10));
			YNega2.setOrigin(sf::Vector2f(5, 5));

			YNega3.setPosition(sf::Vector2f(300, 380 + 30 * 3));
			YNega3.setFillColor(sf::Color::Green);
			YNega3.setSize(sf::Vector2f(10, 10));
			YNega3.setOrigin(sf::Vector2f(5, 5));

			YNega4.setPosition(sf::Vector2f(300, 380 + 30 * 4));
			YNega4.setFillColor(sf::Color::Green);
			YNega4.setSize(sf::Vector2f(10, 10));
			YNega4.setOrigin(sf::Vector2f(5, 5));

			YNega5.setPosition(sf::Vector2f(300, 380 + 30 * 5));
			YNega5.setFillColor(sf::Color::Green);
			YNega5.setSize(sf::Vector2f(10, 10));
			YNega5.setOrigin(sf::Vector2f(5, 5));

			YNega6.setPosition(sf::Vector2f(300, 380 + 30 * 6));
			YNega6.setFillColor(sf::Color::Green);
			YNega6.setSize(sf::Vector2f(10, 10));
			YNega6.setOrigin(sf::Vector2f(5, 5));

			YNega7.setPosition(sf::Vector2f(300, 380 + 30 * 7));
			YNega7.setFillColor(sf::Color::Green);
			YNega7.setSize(sf::Vector2f(10, 10));
			YNega7.setOrigin(sf::Vector2f(5, 5));


			window.draw(Origin);
			window.draw(YPos1);
			window.draw(YPos2);
			window.draw(YPos3);
			window.draw(YPos4);
			window.draw(YPos5);
			window.draw(YPos6);
			window.draw(YPos7);
			window.draw(YNega1);
			window.draw(YNega2);
			window.draw(YNega3);
			window.draw(YNega4);
			window.draw(YNega5);
			window.draw(YNega6);
			window.draw(YNega7);
		}
	}

	void Draw_GraphPlot(sf::RenderWindow &window) {



	}

	void LinearFunctionCompute() {

		//Linear Function Formula
		// f(x) = 2x + 3


	}

};