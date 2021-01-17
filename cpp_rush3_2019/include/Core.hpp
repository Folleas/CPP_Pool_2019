/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** Core
*/

#ifndef CORE_H
 #define CORE_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Core {
    public:
        Core() {};
        virtual ~Core() {};

        std::string getFirstLine(const std::string &filename) const;
        std::string getLinesAsString(const std::string &filename) const;
        std::string getLineByName(const std::string &filename, const std::string &token) const;
        int countSpaces(const std::string &line) const;
        int getIndexSize(const std::string &line, const std::string &token) const;
};

#endif
