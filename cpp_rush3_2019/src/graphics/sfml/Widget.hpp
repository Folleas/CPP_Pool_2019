/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** graphicTest
*/

#ifndef WIDGET_HPP_
# define WIDGET_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream> 
#include <vector>
#include <SFML/Graphics.hpp>

class Widget {
	public:
        enum widgetType { STRING, GRAPH };
        Widget();
		Widget(widgetType type, std::vector<double> position, int width, int height);
		~Widget();
        void DrawWidget();
        void setInformations(std::string newInformations, bool cond);
        sf::RectangleShape *getShape() const;
        sf::Text getText() const;
	private:
        std::vector<double> _position;
        sf::RectangleShape *_shape;
        int _width;
        int _height;
        widgetType _type;
        std::string _informations;
        sf::Font font;
        sf::Text text;
};

#endif /* !WIDGET_HPP_ */