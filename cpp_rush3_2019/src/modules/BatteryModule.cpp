/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** Battery
*/

#include "BatteryModule.hpp"


std::string BatteryModule::getBatteryPercentage() const
{
    std::string capacity = Core::getFirstLine("/sys/class/power_supply/BAT0/capacity");

    return (capacity);
}

