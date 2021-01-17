/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** graphicTest
*/

#include "Display.hpp"
#include "UserModule.hpp"
#include "SysModule.hpp"
#include "TimeModule.hpp"
#include "CpuModule.hpp"
#include "RamModule.hpp"
#include "NetworkModule.hpp"
#include "BatteryModule.hpp"

Display::Display() : sf::RenderWindow(sf::VideoMode(800, 600), "My window")
{
    _USER = new Widget(Widget::widgetType::STRING, (std::vector<double>){10, 10}, 385, 185);
    _RAM = new Widget(Widget::widgetType::STRING, (std::vector<double>){536, 10}, 121, 380);
    _SYS = new Widget(Widget::widgetType::STRING, (std::vector<double>){10, 205}, 385, 185);
    _TIME = new Widget(Widget::widgetType::STRING, (std::vector<double>){667, 10}, 121, 380);
    _CPU = new Widget(Widget::widgetType::STRING, (std::vector<double>){405, 10}, 121, 380);
    _BAT = new Widget(Widget::widgetType::STRING, (std::vector<double>){405, 400}, 385, 185);
    _NET = new Widget(Widget::widgetType::STRING, (std::vector<double>){10, 400}, 385, 185);
}

Display::~Display()
{
}

void Display::DrawWidgets()
{
    UserModule user_c;
    SysModule sys_c;
    TimeModule time_c;
    CpuModule cpu_c;
    RamModule ram_c;
    NetworkModule net_c;
    // BatteryModule bat_c;

    std::string host = user_c.getHostname();
    std::string user = user_c.getUsername();
    std::string sys = sys_c.getOsName();
    std::string  time = time_c.getTime();
    std::string day = time_c.getDay();
    std::string date = time_c.getFulldate();
    std::string model = cpu_c.getCpuModel();
    std::string nbCore = cpu_c.getNbCore();
    std::string freq = cpu_c.getFrequency();
    // std::string currentFreq = cpu_c.getCurrentFrequency();
    std::string physMem = ram_c.getPhysicalMemory();
    // std::string swap = ram_c.getSwapPer();
    std::string physPer = ram_c.getPhysicalPer();
    // bool txPackets = net_c.getTxPackets();
    // bool rxPackets = net_c.getRxPackets();
    // std::string bat = bat_c.getBatteryPercentage();

    _CPU->setInformations("{CPU}\n\nModel :\n" + model + "\nNumber of Cores :\n" + nbCore + "\nFrequency :\n" + freq + "\n", true);
    _RAM->setInformations("[RAM]\n\nPhysical Memory : \n" + physMem + " gb\nPhysical Percentage : \n" + physPer + "%\n", true);
    _SYS->setInformations("[SYS]\n\n" + sys + "\n", false);
    _TIME->setInformations("[TIME]\n\n" + time + "\n" + date + "\n" + day, true);
    _USER->setInformations("[USER]\n\nHostname : " + host + "\nUsername : " + user + "\n", false);
    // _BAT->setInformations("[BAT]\n" + bat + "%\n", false);
    _NET->setInformations("[NET]", false);
    this->draw(*(_CPU->getShape()));
    this->draw(_CPU->getText());
    this->draw(*(_RAM->getShape()));
    this->draw(_RAM->getText());
    this->draw(*(_SYS->getShape()));
    this->draw(_SYS->getText());
    this->draw(*(_TIME->getShape()));
    this->draw(_TIME->getText());
    this->draw(*(_USER->getShape()));
    this->draw(_USER->getText());
    this->draw(*(_BAT->getShape()));
    this->draw(_BAT->getText());
    this->draw(*(_NET->getShape()));
    this->draw(_NET->getText());
}