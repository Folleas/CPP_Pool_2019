/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** Network Module
*/

#include "NetworkModule.hpp"
// Download event
bool NetworkModule::getRxPackets()
{
    std::string packet = Core::getFirstLine("/sys/class/net/wlp3s0/statistics/rx_packets");

    if (std::atoi(packet.c_str()) > this->rxPacket) {
        this->rxPacket = std::atoi(packet.c_str());
        return (true);
    }
    else
        return (false);
}

// Upload event
bool NetworkModule::getTxPackets()
{
    std::string packet = Core::getFirstLine("/sys/class/net/wlp3s0/statistics/tx_packets");

    if (std::atoi(packet.c_str()) > this->txPacket) {
        this->txPacket = std::atoi(packet.c_str());
        return (true);
    }
    else
        return (false);
}

