/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** Display_ncurse
*/

#include "ncurses.h"
#include "TimeModule.hpp"
#include "UserModule.hpp"
#include "SysModule.hpp"
#include "CpuModule.hpp"
#include <string>

void window_curse ()
{
    WINDOW *user;
    WINDOW *cpu;
    WINDOW *ram;
    UserModule use;
    SysModule sys;
    CpuModule bot;

    initscr();
    user = subwin(stdscr, (LINES / 2) - 1, COLS / 1.5, 0, 0);
    cpu = subwin(stdscr, LINES / 2.5, COLS / 2.5, (LINES / 2) + 0.5, 0);
    ram = subwin(stdscr, LINES / 2.5, COLS / 2.5, (LINES / 2) + 0.5, COLS /2);
    noecho();
    curs_set(0);
    start_color();
    use_default_colors();
    init_pair(0, COLOR_BLACK, COLOR_RED);
    while (true) {
	TimeModule hour;
	attron(COLOR_PAIR(0));
        box(user, ACS_VLINE, ACS_HLINE);
        wborder(cpu, '|', '|', '-', '-', '0', '0', '0', '0');
        wborder(ram, '|', '|', '-', '-', 'O', 'O', 'O', 'O');
        mvwprintw(user, 2, 2, "User Name: ");
        mvwprintw(user, 2, 14, use.getUsername().c_str());
        mvwprintw(user, 4, 2, "Host Name: ");
        mvwprintw(user, 4, 14, use.getHostname().c_str());
        mvwprintw(user, 6, 2, "OS Name: ");
        mvwprintw(user, 6, 12, sys.getOsName().c_str());
        mvwprintw(user, 8, 2, "Time: ");
        mvwprintw(user, 8, 9, hour.getTime().c_str());
        mvwprintw(user, 10, 2, "Day: ");
        mvwprintw(user, 10, 8, hour.getDay().c_str());
        mvwprintw(user, 12, 2, "Date: ");
        mvwprintw(user, 12, 9, hour.getFulldate().c_str());
        attroff(COLOR_PAIR(0));
        mvwprintw(cpu, 4, 2, "Number of cores: ");
        mvwprintw(cpu, 4, 20, bot.getNbCore().c_str());
        mvwprintw(cpu, 8, 2, "Percent of usage: %%");
        mvwprintw(cpu, 8, 21, bot.getCurrentFrequency().c_str());
	mvwprintw(cpu, 12, 2, "CPU Model: ");
        mvwprintw(cpu, 12, 14, bot.getCpuModel().c_str());
        mvwprintw(ram, 4, 2, "Total RAM: ");
	mvwprintw(ram, 4, 14, "a remplir");
        mvwprintw(ram, 8, 2, "Percent of usage: ");
	mvwprintw(ram, 8, 21, "a remplir");
        mvwprintw(ram, 12, 2, "Swap: ");
	mvwprintw(ram, 12, 9, "a remplir");
        wrefresh(user);
	wrefresh(cpu);
	wrefresh(ram);
	refresh();
    }
    endwin();
}
