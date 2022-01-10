#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>

struct TextBox
{
    sf::String Input;
    sf::Text userText;
    sf::Text userText2;
    sf::Text userText3;
    sf::Text userText4;
    sf::Text userText5;
    sf::Text sumText;
    sf::Text sumText2;
    sf::Text sumText3;
    sf::Text sumText4;
    sf::Text sumText5;

    sf::Font font;

    // Converts sf::String to std::string
    std::string userInput = Input;
    std::string userInput2 = Input;
    std::string userInput3 = Input;
    std::string userInput4 = Input;
    std::string userInput5 = Input;

    int null;

    int num1 = null;
    int sum = 0;

    bool Result1 = false;
    bool Result2 = false;
    bool Result3 = false;
    bool Result4 = false;
    bool Result5 = false;
    bool input1Entered = false;
    bool input2Entered = false;
    bool input3Entered = false;
    bool input4Entered = false;
    bool input5Entered = false;
    bool nextInput = false;
    bool nextInput2 = false;
    bool nextInput3 = false;
    bool nextInput4 = false;

    bool FinalInput = false;

    void Draw_UserText(sf::RenderWindow &window) {
        
        font.loadFromFile("Fonts/dogica.ttf");
        userText.setFont(font);
        userText.setPosition(sf::Vector2f(286, 30));
        userText.setFillColor(sf::Color::Black);
        userText.setCharacterSize(12);

        userText2.setFont(font);
        userText2.setPosition(sf::Vector2f(316, 30));
        userText2.setFillColor(sf::Color::Black);
        userText2.setCharacterSize(12);

        userText3.setFont(font);
        userText3.setPosition(sf::Vector2f(346, 30));
        userText3.setFillColor(sf::Color::Black);
        userText3.setCharacterSize(12);


        userText4.setFont(font);
        userText4.setPosition(sf::Vector2f(376, 30));
        userText4.setFillColor(sf::Color::Black);
        userText4.setCharacterSize(12);

        userText5.setFont(font);
        userText5.setPosition(sf::Vector2f(406, 30));
        userText5.setFillColor(sf::Color::Black);
        userText5.setCharacterSize(12);

        window.draw(userText);
        window.draw(userText2);
        window.draw(userText3);
        window.draw(userText4);
        window.draw(userText5);

    }

    void Draw_SumText(sf::RenderWindow& window) {

        font.loadFromFile("Fonts/dogica.ttf");

        if (Result1 == true) {

            sumText.setFont(font);
            sumText.setPosition(sf::Vector2f(286, 48));
            sumText.setFillColor(sf::Color::Black);
            sumText.setCharacterSize(12);

            window.draw(sumText);
        }

        if (Result2 == true) {

            sumText2.setFont(font);
            sumText2.setPosition(sf::Vector2f(316, 48));
            sumText2.setFillColor(sf::Color::Black);
            sumText2.setCharacterSize(12);

            window.draw(sumText2);
        }

        if (Result3 == true) {

            sumText3.setFont(font);
            sumText3.setPosition(sf::Vector2f(346, 48));
            sumText3.setFillColor(sf::Color::Black);
            sumText3.setCharacterSize(12);

            window.draw(sumText3);
        }

        if (Result4 == true) {

            sumText4.setFont(font);
            sumText4.setPosition(sf::Vector2f(376, 48));
            sumText4.setFillColor(sf::Color::Black);
            sumText4.setCharacterSize(12);

            window.draw(sumText4);
        }

        if (Result5 == true) {

            sumText5.setFont(font);
            sumText5.setPosition(sf::Vector2f(406, 48));
            sumText5.setFillColor(sf::Color::Black);
            sumText5.setCharacterSize(12);

            window.draw(sumText5);
        }

    }



    void User_Input(sf::Event &event) {
        if (input1Entered == false) {

                if (event.text.unicode > 47 && event.text.unicode < 58 || event.text.unicode == 45) {
                    if (userInput.length() < 2) // User can't type more than two digits.
                    {
                        userInput += event.text.unicode;
                        userText.setString(userInput + "_"); 


                    }
                }
                if (event.text.unicode == '\b') // Handles backspace explicitly.
                {
                    // User can't backspace out of bound.
                    if (userInput.length() > 0) {
                        userInput.erase(userInput.size() - 1, 1);
                        userText.setString(userInput + "_");
                    }
                }
        }

        if (nextInput == true && input2Entered == false) {

            if (event.text.unicode > 47 && event.text.unicode < 58 || event.text.unicode == 45) {
                if (userInput2.length() < 2) // User can't type more than two digits.
                {
                    userInput2 += event.text.unicode;
                    userText2.setString(userInput2 + "_");


                }
            }
            if (event.text.unicode == '\b') // Handles backspace explicitly.
            {
                // User can't backspace out of bound.
                if (userInput2.length() > 0) {
                    userInput2.erase(userInput2.size() - 1, 1);
                    userText2.setString(userInput2 + "_");
                }
            }

        }

        if (nextInput2 == true && input3Entered == false) {

            if (event.text.unicode > 47 && event.text.unicode < 58 || event.text.unicode == 45) {
                if (userInput3.length() < 2) // User can't type more than two digits.
                {
                    userInput3 += event.text.unicode;
                    userText3.setString(userInput3 + "_");


                }
            }
            if (event.text.unicode == '\b') // Handles backspace explicitly.
            {
                // User can't backspace out of bound.
                if (userInput3.length() > 0) {
                    userInput3.erase(userInput3.size() - 1, 1);
                    userText3.setString(userInput3 + "_");
                }
            }

        }

        if (nextInput3 == true && input4Entered == false) {

            if (event.text.unicode > 47 && event.text.unicode < 58 || event.text.unicode == 45) {
                if (userInput4.length() < 2) // User can't type more than two digits.
                {
                    userInput4 += event.text.unicode;
                    userText4.setString(userInput4 + "_");


                }
            }
            if (event.text.unicode == '\b') // Handles backspace explicitly.
            {
                // User can't backspace out of bound.
                if (userInput4.length() > 0) {
                    userInput4.erase(userInput4.size() - 1, 1);
                    userText4.setString(userInput4 + "_");
                }
            }

        }

        if (nextInput4 == true && input5Entered == false) {

            if (event.text.unicode > 47 && event.text.unicode < 58 || event.text.unicode == 45) {
                if (userInput5.length() < 2) // User can't type more than two digits.
                {
                    userInput5 += event.text.unicode;
                    userText5.setString(userInput5 + "_");


                }
            }
            if (event.text.unicode == '\b') // Handles backspace explicitly.
            {
                // User can't backspace out of bound.
                if (userInput5.length() > 0) {
                    userInput5.erase(userInput5.size() - 1, 1);
                    userText5.setString(userInput5 + "_");
                }
            }

        }

    }

    void Display_Result(sf::RenderWindow &window) {

        if (userInput != Input && userInput != "-" && userInput != "--") {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) {


                num1 = std::stoi(userInput);

                if (num1 < 9 && num1 > -9) {

                    // Equation
                    sum = 2 * num1 + 3;

                    // Converted the int to string so that I could display it.
                    std::stringstream ss;
                    ss << sum;
                    std::string SUM;
                    ss >> SUM;

                    if (userInput.length() == 1 && SUM.length() == 1) {
                        userText.setString(" " + userInput);
                        sumText.setString(" " + SUM);
                    }

                    else if (userInput.length() == 2 && SUM.length() < 2) {
                        userText.setString(userInput);
                        sumText.setString(" " + SUM);
                    }
                    else {
                        userText.setString(userInput);
                        sumText.setString(SUM);
                    }

                    Result1 = true;
                    input1Entered = true;
                    nextInput = true;

                }
                else {

                    Result1 = true;
                    sumText.setString("Invalid Number");

                }
            }
        }

        if (userInput2 != Input && userInput2 != "-" && userInput2 != "--") {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) {


                num1 = std::stoi(userInput2);

                if (num1 < 9 && num1 > -9) {

                    // Equation
                    sum = 2 * num1 + 3;

                    // Converted the int to string so that I could display it.
                    std::stringstream ss;
                    ss << sum;
                    std::string SUM;
                    ss >> SUM;

                    if (userInput2.length() == 1 && SUM.length() == 1) {
                        userText2.setString(" " + userInput2);
                        sumText2.setString(" " + SUM);
                    }

                    else if (userInput2.length() == 2 && SUM.length() < 2) {
                        userText2.setString(userInput2);
                        sumText2.setString(" " + SUM);
                    }
                    else {
                        userText2.setString(userInput2);
                        sumText2.setString(SUM);
                    }

                    Result2 = true;
                    nextInput2 = true;
                    input2Entered = true;

                }
                else {

                    Result2 = true;
                    sumText2.setString("Invalid Number");

                }
            }
        }

        if (userInput3 != Input && userInput3 != "-" && userInput3 != "--") {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) {


                num1 = std::stoi(userInput3);

                if (num1 < 9 && num1 > -9) {

                    // Equation
                    sum = 2 * num1 + 3;

                    // Converted the int to string so that I could display it.
                    std::stringstream ss;
                    ss << sum;
                    std::string SUM;
                    ss >> SUM;

                    if (userInput3.length() == 1 && SUM.length() == 1) {
                        userText3.setString(" " + userInput3);
                        sumText3.setString(" " + SUM);
                    }

                    else if (userInput3.length() == 2 && SUM.length() < 2) {
                        userText3.setString(userInput3);
                        sumText3.setString(" " + SUM);
                    }
                    else {
                        userText3.setString(userInput3);
                        sumText3.setString(SUM);
                    }

                    Result3 = true;
                    nextInput3 = true;
                    input3Entered = true;

                }
                else {

                    Result3 = true;
                    sumText3.setString("Invalid Number");

                }
            }
        }

        if (userInput4 != Input && userInput4 != "-" && userInput4 != "--") {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) {


                num1 = std::stoi(userInput4);

                if (num1 < 9 && num1 > -9) {

                    // Equation
                    sum = 2 * num1 + 3;

                    // Converted the int to string so that I could display it.
                    std::stringstream ss;
                    ss << sum;
                    std::string SUM;
                    ss >> SUM;

                    if (userInput4.length() == 1 && SUM.length() == 1) {
                        userText4.setString(" " + userInput4);
                        sumText4.setString(" " + SUM);
                    }

                    else if (userInput4.length() == 2 && SUM.length() < 2) {
                        userText4.setString(userInput4);
                        sumText4.setString(" " + SUM);
                    }
                    else {
                        userText4.setString(userInput4);
                        sumText4.setString(SUM);
                    }

                    Result4 = true;
                    nextInput4 = true;
                    input4Entered = true;

                }
                else {

                    Result4 = true;
                    sumText4.setString("Invalid Number");

                }
            }
        }

        if (userInput5 != Input && userInput5 != "-" && userInput5 != "--") {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) {


                num1 = std::stoi(userInput5);

                if (num1 < 9 && num1 > -9) {

                    // Equation
                    sum = 2 * num1 + 3;

                    // Converted the int to string so that I could display it.
                    std::stringstream ss; 
                    ss << sum;
                    std::string SUM;
                    ss >> SUM;

                    if (userInput5.length() == 1 && SUM.length() == 1) {
                        userText5.setString(" " + userInput5);
                        sumText5.setString(" " + SUM);
                    }

                    else if (userInput5.length() == 2 && SUM.length() < 2) {
                        userText5.setString(userInput5);
                        sumText5.setString(" " + SUM);
                    }
                    else {
                        userText5.setString(userInput5);
                        sumText5.setString(SUM);
                    }

                    Result5 = true;
                    FinalInput = true;
                    input5Entered = true;

                }
                else {

                    Result5 = true;
                    sumText5.setString("Invalid Number");

                }
            }
        }

    }


};