//
// EPITECH PROJECT, 2020
// 
// File description:
// 
//

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <iostream>
#include <string>
#include <sstream>

void graphDisplay()
{
    sf::RenderWindow window(sf::VideoMode(810, 600), "test");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event))
            if (event.type == sf::Event::Closed)
                window.close();
        window.clear(sf::Color::White);

        sf::Texture texture;
        texture.loadFromFile("fond.jpg");
        sf::Sprite background(texture);
        window.draw(background);
        sf::Texture texture2;
        texture2.loadFromFile("vaisseau.png");
        sf::Sprite logo(texture2);
        logo.setPosition(345, 80);
        window.draw(logo);

        window.display();
    }
}

int main()
{
        graphDisplay();
}
