/*
** EPITECH PROJECT, 2018
** cpp_rush3
** File description:
** Network Module
*/

#ifndef NETWORKMOD_H
 #define NETWORKMOD_H

#include "Core.hpp"
#include "IMonitorModule.hpp"

class NetworkModule: public Core, public IMonitorModule {
    public:
        NetworkModule(): Core() {};
        virtual ~NetworkModule() {};

        bool getTxPackets();
        bool getRxPackets();

    private:
        int txPacket = 0;
        int rxPacket = 0;
};

#endif
