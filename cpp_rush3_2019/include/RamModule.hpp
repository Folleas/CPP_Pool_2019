/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** RAM
*/

#ifndef RAMMOD_H
 #define RAMMOD_H

#include "Core.hpp"
#include "IMonitorModule.hpp"

class RamModule: public Core, public IMonitorModule
{
    public:
        RamModule(): Core() {};
        virtual ~RamModule() {};

        std::string getPhysicalMemory() const;
        std::string getSwap() const;
        std::string getPhysicalUsed() const;
        std::string getSwapUsed() const;
        std::string getPhysicalPer() const;
        std::string getSwapPer() const;

        // Do not implement that inside ncurse & sfml
        std::string getPhysicalFree() const;
};

#endif
