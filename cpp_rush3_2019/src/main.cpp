/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** main
*/

#include "MyGKrellm.hpp"
#include <string>
#include <fstream>
#include <iostream>

void display_help()
{
    std::cout << "-t for ncurses display" << std::endl;
    std::cout << "-g for SFML display" << std::endl;
    std::cout << "-h for help display" << std::endl;
    std::cout << "-d for debug main call" << std::endl;
}

void display_graphical();

int main(int ac, char **av)
{
    RamModule p;

    // std::cout << p.getSwapPer() << std::endl;
    if (ac == 1 || (std::string) av[1] == "-h")
      display_help();
    else if ((std::string) av[1] == "-g")
	    display_graphical();
    else if ((std::string) av[1] == "-t")
      window_curse();
    else if ((std::string) av[1] == "-d")
        debug();
    return 0;
}
