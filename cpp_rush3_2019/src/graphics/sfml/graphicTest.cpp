/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** graphicTest
*/

#include "Widget.hpp"
#include "Display.hpp"

void display_graphical()
{
    // sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    // sf::RectangleShape rectangle(sf::Vector2f(120.f, 50.f));
    Display window;
    sf::Color color(205, 249, 238);
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(color);

        window.DrawWidgets();
        window.display();
    }
}