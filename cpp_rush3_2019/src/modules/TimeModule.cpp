/*
** EPITECH PROJECT, 2018
** cpp_rush3 
** File description:
** TimeModule
*/

#include "TimeModule.hpp"
#include <sstream>
#include <vector>

std::vector<std::string> getMonths()
{
    std::vector<std::string> months;

    months.push_back("January");
    months.push_back("February");
    months.push_back("March");
    months.push_back("April");
    months.push_back("May");
    months.push_back("June");
    months.push_back("July");
    months.push_back("August");
    months.push_back("September");
    months.push_back("October");
    months.push_back("November");
    months.push_back("December");
    return (months);
}

std::vector<std::string> getDays()
{
    std::vector<std::string> days;

    days.push_back("Monday");
    days.push_back("Tuesday");
    days.push_back("Wednesday");
    days.push_back("Thursday");
    days.push_back("Friday");
    days.push_back("Saturday");
    days.push_back("Sunday");
    return (days);
}

std::string TimeModule::getTime() const
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::stringstream ss;

    ss << ltm->tm_hour << ":";
    if (ltm->tm_min <= 9)
        ss << "0";
    ss << ltm->tm_min;
    return (ss.str());
}

std::string TimeModule::getFulldate() const
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::stringstream ss;
    std::vector<std::string> months = getMonths();

    ss << ltm->tm_mday << " " << months[ltm->tm_mon] << " " << ltm->tm_year + 1900;
    return (ss.str());
}

std::string TimeModule::getDay() const
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::stringstream ss;
    std::vector<std::string> days = getDays();

    ss << days[ltm->tm_wday];
    return (ss.str());
}
