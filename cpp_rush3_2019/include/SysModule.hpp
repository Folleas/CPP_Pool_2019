/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** SysModule
*/

#ifndef SYSMODULE_HPP_
#define SYSMODULE_HPP_

#include "Core.hpp"
#include <string>

class SysModule : public Core
{
	public:
		SysModule();
		~SysModule();
        void findOs();
        const std::string &getOsName();

	protected:
	private:
        std::string _name;
};

#endif /* !SYSMODULE_HPP_ */
