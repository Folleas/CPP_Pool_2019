/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** CPU module
*/

#include "CpuModule.hpp"
#include <cstdlib>

std::string CpuModule::getCpuModel() const
{
    std::string model = Core::getLineByName("/proc/cpuinfo", "model name");

    return (model.substr(model.find(":") + 2, model.size()));
}

std::string CpuModule::getNbCore() const
{
    std::string cores = Core::getLineByName("/proc/cpuinfo", "siblings");

    return (cores.substr(cores.find(":") + 2, cores.size()));
}

std::string CpuModule::getFrequency() const
{
    std::string freq = this->getCpuModel();

    return (freq.substr(freq.find("@") + 2, freq.size()));
}

std::string CpuModule::getCurrentFrequency() const
{
    std::string buf = "grep 'cpu ' /proc/stat | awk '{usage=($2+$4)*100/($2+$4+$5)} END {print usage \"%\"}' > temp_file";

    system(buf.c_str());
    buf = Core::getFirstLine("temp_file");
    system("rm -f temp_file");
    buf = buf.substr(0, (buf.find(".") + 3));
    buf += "%";
    return buf;
}

std::string CpuModule::getCpuTemperature() const
{
    std::string temp = Core::getFirstLine("/sys/class/thermal/thermal_zone0/temp");

    return (temp.substr(0, 2));
}
