#pragma once
#include <iostream>
#include <sfml/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include "CartesianPlane.h"
#include "PlotGraph.h"
#include "TextBox.h"

int main() {


    // creates the window.
    sf::RenderWindow window(sf::VideoMode(600, 680), "Linear Function Graph", sf::Style::Close | sf::Style::Titlebar);

    GridCartesianPlane cartesianplane;
    PlotGraph plotgraph;
    TextBox textbox;



    // run the program as long as the window is open.
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop.
        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.text.unicode < 128) {
                if (event.type == sf::Event::TextEntered)
                {
                    textbox.User_Input(event);
                }
            }



            // Checks mouse position.
            if (event.type == sf::Event::MouseButtonPressed)
                if (event.mouseButton.button == sf::Mouse::Button::Right)
                    std::cout << "Mouse Position: " << sf::Mouse::getPosition(window).x << " " << sf::Mouse::getPosition(window).y << "\n";


            // "close requested" event: we close the window.
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.key.code == sf::Keyboard::Escape)
                window.close();
        }

        // clears the window.
        window.clear(sf::Color::White);

        // draw everything here...
        cartesianplane.Draw_Cartesian_Plane(window);
        plotgraph.PlottingPoints(window);
        textbox.Draw_UserText(window);
        textbox.Draw_SumText(window);
        textbox.Display_Result(window);


        // end the current frame.
        window.display();
    }

    return 0;
}