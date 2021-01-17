std/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** Battery
*/

#ifndef BATTERYMOD_H
 #define BATTERYMOD_H

#include "Core.hpp"
#include "IMonitorModule.hpp"

class BatteryModule: public Core, public IMonitorModule {
    public:
        BatteryModule(): Core() {};
        virtual ~BatteryModule() {};

        std::string getBatteryPercentage() const;
};

#endif
