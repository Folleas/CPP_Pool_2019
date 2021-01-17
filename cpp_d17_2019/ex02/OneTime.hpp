/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** find
*/

#ifndef ONETIME_HPP_
#define ONETIME_HPP_

#include <string>
#include <map>
#include "IEncryptionMethod.hpp"

class OneTime  : virtual public IEncryptionMethod {
    public:
        OneTime(const std::string &key);
        ~OneTime();
        virtual void encryptChar(char plainhar);
        virtual void decryptChar(char cypherchar);
        virtual void reset();
    private:
        std::string _key;
        int _shift;
        std::map<char, int> _array;
};

#endif