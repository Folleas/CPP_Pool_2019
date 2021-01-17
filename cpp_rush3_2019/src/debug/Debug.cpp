/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** Debug
*/

#include "UserModule.hpp"
#include "SysModule.hpp"
#include "TimeModule.hpp"
#include "RamModule.hpp"
#include "CpuModule.hpp"
#include "BatteryModule.hpp"
#include "NetworkModule.hpp"

void displayUserModule()
{
    UserModule user;

    std::cout << "Username: " << user.getUsername() << std::endl;
    std::cout << "Hostname: " << user.getHostname() << std::endl;
}

void displaySysModule()
{
    SysModule sys;

    std::cout << "Os name: " << sys.getOsName() << std::endl;
}

void displayTimeModule()
{
    TimeModule time;

    std::cout << "Day: " << time.getDay() << std::endl;
    std::cout << "Full date: " << time.getFulldate() << std::endl;
    std::cout << "Time: " << time.getTime() << std::endl;
}

void displayRamModule()
{
    RamModule ram;

    std::cout << "Physical memory: " << ram.getPhysicalMemory() << " Gb"<<std::endl;
    std::cout << "Swap: " << ram.getSwap() << " Gb"<< std::endl;
    std::cout << "Memory used: " << ram.getPhysicalUsed() << " Gb" << std::endl;
    std::cout << "Swap used: " << ram.getSwapUsed() << " Gb" << std::endl;
    std::cout << "Memory use pourcentage: " << ram.getPhysicalPer() << "%" << std::endl;
    std::cout << "Swap use pourcentage: " << ram.getSwapPer() << "%" << std::endl;
}

void displayCpuModule()
{
    CpuModule cpu;

    std::cout << "Model: " << cpu.getCpuModel() << std::endl;
    std::cout << "Cores: " << cpu.getNbCore() << std::endl;
    std::cout << "Frequency: " << cpu.getFrequency() << std::endl;
    std::cout << "Temperature: " << cpu.getCpuTemperature() << " degrees"<< std::endl;
}

void displayBatteryModule()
{
    BatteryModule battery;

    std::cout << "Battery percentage remaining: " << battery.getBatteryPercentage() << "%\n";
}

void displayNetworkModule()
{
    int count = 0;
    NetworkModule net;
    int tx = 1;
    int rx = 1;

    while (count != 150) {
        if (net.getTxPackets())
            tx++;
        if (net.getRxPackets()) {
            rx++;
            count++;
        }
        if (rx % 100 == 0)
            std::cout << "Network: recieved 100 packets (download)." << std::endl;
        if (tx % 100 == 0)
            std::cout << "Network: transmitted 100 packets (upload)." << std::endl;
    }
}

void debug()
{
    displayUserModule();
    displayTimeModule();
    displayRamModule();
    displayCpuModule();
    displaySysModule();
    displayBatteryModule();
    displayNetworkModule();
}
