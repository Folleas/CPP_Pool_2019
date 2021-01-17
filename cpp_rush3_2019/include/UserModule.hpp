/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** UserModule
*/

#ifndef USERMOD_H
 #define USERMOD_H

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Core.hpp"
#include "IMonitorModule.hpp"

class UserModule: public Core, public IMonitorModule
{
    public:
        UserModule(): Core() {

        };
        virtual ~UserModule() {};

        std::string getHostname() const;
        std::string getUsername() const;
};

#endif
