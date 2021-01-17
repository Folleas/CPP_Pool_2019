/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** graphicTest
*/

#ifndef DISPLAY_HPP_
# define DISPLAY_HPP_

#include "Widget.hpp"

class Display : public sf::RenderWindow {
	public:
		Display();
		~Display();
        void DrawWidgets();
	private:
        Widget *_CPU;
        Widget *_RAM;
        Widget *_SYS;
        Widget *_TIME;
        Widget *_USER;
        Widget *_BAT;
        Widget *_NET;
};

#endif /* !DISPLAY_HPP_ */