/*
** EPITECH PROJECT, 2018
** cpp_rush3 
** File description:
** Core
*/

#include "Core.hpp"
#include <string>

std::string Core::getFirstLine(const std::string &filename) const
{
    std::string output;
    std::ifstream buff(filename);

    if (!buff)
        return "ERROR";
    getline(buff, output);
    return (output);
}

std::string Core::getLinesAsString(const std::string &filename) const
{
    std::fstream f(filename, std::fstream::in);
    std::string s;

    getline(f, s, '\0');
    f.close();
    return (s);
}

std::string Core::getLineByName(const std::string &filename, const std::string &token) const
{
    std::string output;
    std::ifstream buff(filename);

    if (!buff)
        return ("Can't open file");
    while (getline(buff, output)) {
        if (output.rfind(token, 0) == 0)
            return (output);
    }
    buff.close();
    return ("Element not found!");
}

int Core::countSpaces(const std::string &line) const
{
    int spaces = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == ' ')
            spaces++;
    }
    return (spaces);
}

int Core::getIndexSize(const std::string &line, const std::string &token) const
{
    int test = line.find(token);
    return (test);
}
