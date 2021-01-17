/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** Time
*/

#ifndef TIMEMOD_H
 #define TIMEMOD_H

#include <string>
#include <iostream>
#include <sstream>
#include <ctime>
#include "IMonitorModule.hpp"

class TimeModule : public IMonitorModule
{
    public:
        TimeModule() {};
        virtual ~TimeModule() {};

        std::string getTime() const;
        std::string getFulldate() const;
        std::string getDay() const;
};

#endif
