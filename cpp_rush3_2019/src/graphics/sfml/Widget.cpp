/*
** Widget.cpp for cpp_rush3_2019 in sfml
**
** Made by 
** rayann.folleas@epitech.eu
**
** Started on  Sat Feb 1 5:42:24 PM 2020 
** Last update Sun Feb 1 6:23:05 PM 2020 
*/

#include "Widget.hpp"

Widget::Widget(widgetType type, std::vector<double> position, int width, int height)
{
    _type = type;
    _position = position;
    _width = width;
    _height = height;
    printf("%.1f\n%.1f\n", position.at(0), position.at(1));
    _shape = new sf::RectangleShape(sf::Vector2f(1, 1));
    _shape->setFillColor((sf::Color)448094);
    _shape->setPosition(position.at(0), position.at(1));
    _shape->setScale((sf::Vector2f(width, height)));
    font.loadFromFile("src/graphics/sfml/typo.ttf");
    text.setFont(font);
    text.setCharacterSize(25);
    text.setFillColor(sf::Color::White);
    text.setStyle(sf::Text::Bold);
}

void Widget::setInformations(std::string newInformations, bool cond)
{
    _informations = newInformations;
    text.setString(_informations.c_str());
    // text.setScale(10, 10);
    if (cond)
        text.setCharacterSize(10);
    text.setPosition(_position.at(0), _position.at(1));
}

Widget::~Widget()
{
}

sf::RectangleShape *Widget::getShape() const
{
    return (_shape);
}

sf::Text Widget::getText() const
{
    return (text);
}