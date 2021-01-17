/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** CPU
*/

#ifndef CPUMOD_H
# define CPUMOD_H

#include <string>
#include "Core.hpp"
#include "IMonitorModule.hpp"

class CpuModule: public Core, public IMonitorModule {
    public:
        CpuModule(): Core() {};
        virtual ~CpuModule() {};

        std::string getCpuModel() const;
        std::string getFrequency() const;
        std::string getNbCore() const;
        std::string getCurrentFrequency() const;

        // bonus
        std::string getCpuTemperature() const;
};

#endif
