/*
** EPITECH PROJECT, 2020
** cpp_rush3
** File description:
** SysModule
*/

#include "SysModule.hpp"

SysModule::SysModule()
{
}

SysModule::~SysModule()
{
}

std::string parseOsName(const std::string &tmp)
{
    std::string fnl = "";
    int j = 0;

    for (; tmp[j] != ' '; j++) {
        fnl += tmp[j];
    } j++;
    while (tmp[j] != ' ')
        j++;
    j++;
    fnl += " ";
    for (; tmp[j] != ' '; j++) {
        fnl += tmp[j];
    } return fnl;
}

void SysModule::findOs()
{
    std::string buf;
    int i = 0;

    buf = getFirstLine("/proc/version");
    this->_name = parseOsName(buf);
    i = this->_name.size();
    while (this->_name[i] != '.')
        i--;
    this->_name = this->_name.substr(0, i);
}

const std::string& SysModule::getOsName()
{
    this->findOs();
    return this->_name;
}