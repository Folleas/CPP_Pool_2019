/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** Ram
*/

#include "RamModule.hpp"
#include <algorithm>
#include <string>

std::string RamModule::getPhysicalMemory() const
{
    std::string memTotal = Core::getLineByName("/proc/meminfo", "MemTotal");
    std::stringstream temp;

    memTotal = memTotal.substr(memTotal.find(":") + Core::countSpaces(memTotal), \
            memTotal.size() - 3);
    memTotal = memTotal.substr(0, memTotal.find(" "));
    temp << memTotal[0] << "." << memTotal[2];
    return (temp.str());
}

std::string RamModule::getPhysicalFree() const
{
    std::string memFree = Core::getLineByName("/proc/meminfo", "MemAvailable");
    std::stringstream temp;

    memFree = memFree.substr(memFree.find(":") + Core::countSpaces(memFree), \
            memFree.size() - 3);
    memFree = memFree.substr(0, memFree.find(" "));
    if (memFree.size() < 7)
        temp << "0" << "." << memFree[0];
    else
        temp << memFree[0] << "." << memFree[2];
    return (temp.str());
}

std::string RamModule::getSwap() const
{
    std::string swapTotal = Core::getLineByName("/proc/swaps", "/");
    std::string temp;
    std::stringstream swapGb;

    temp = &swapTotal[swapTotal.find("partition") + 10];
    temp = temp.substr(0, temp.find("\t"));
    swapGb << temp[0] << "." << temp[1];
    return (swapGb.str());
}

std::string RamModule::getSwapUsed() const
{
    std::string swapFree = Core::getLineByName("/proc/swaps", "/");
    std::string temp;
    std::stringstream swapGb;

    temp = &swapFree[swapFree.find("partition") + 10];
    temp = temp.substr(temp.find("\t"), temp.find("\t"));
    temp = &temp[1];
    if (temp.size() < 7)
        swapGb << "0." << temp[1];
    else
        swapGb << temp[0] << "." << temp[1];
    return (swapGb.str());
}

std::string RamModule::getPhysicalUsed() const
{
    std::stringstream ss;
    float physical = stof(this->getPhysicalMemory());
    float free = stof(this->getPhysicalFree());

    ss << physical - free;
    return (ss.str());
}

std::string RamModule::getSwapPer() const
{
    std::stringstream fnl;
    int total = std::atoi(this->getSwap().c_str());

    total = (100 * std::atoi(this->getSwapUsed().c_str())) / total;
    fnl << total;
    return fnl.str();
}

std::string RamModule::getPhysicalPer() const
{
    std::stringstream fnl;
    int total = std::atoi(this->getPhysicalMemory().c_str());

    total = (100 * std::atoi(this->getPhysicalUsed().c_str())) / total;
    fnl << total;
    return fnl.str();
}