/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** UserModule
*/

#include "UserModule.hpp"
#include <algorithm>

std::string UserModule::getHostname() const
{
    std::string hostFile = UserModule::getLinesAsString("/etc/hostname");
    std::string temp;

    if (hostFile.find(".") != std::string::npos) {
        temp = hostFile.substr(0, hostFile.find("."));
        temp.erase(std::remove(temp.begin(), temp.end(), '\n'), temp.end());
        return (temp);
    }
    hostFile.erase(std::remove(hostFile.begin(), hostFile.end(), '\n'), hostFile.end());
    return (hostFile);
}

std::string UserModule::getUsername() const
{
    std::string user = getenv("USER");

    if (user.empty())
        return "Username error";
    return (user);
}

