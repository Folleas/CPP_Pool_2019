/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** find
*/

#include <iostream>
#include "OneTime.hpp"

OneTime::OneTime(const std::string &key)
{
    char current = 'a';

    for (int i = 0; i <= 26; i++) {
        this->_array[current] = i;
        this->_array[current - 32] = i;
        current += 1;
    }
    _key = key;
}

void OneTime::encryptChar(char plainchar)
{
    while (_shift >= (int)this->_key.length())
        _shift = _shift - (int)this->_key.length();
    char keyChar = this->_key.c_str()[_shift];

    if ((plainchar >= 'a' && plainchar <= 'z') || (plainchar >= 'A' && plainchar <= 'Z')) {
        for (int it = 0; it < this->_array[keyChar]; it += 1) {
            if (plainchar == 'z')
                plainchar = 'a';
            else if (plainchar == 'Z')
                plainchar = 'A';
            else
                plainchar += 1;
        }
    }
    std::cout << plainchar;
    _shift += 1;
}

void OneTime::decryptChar(char cypherchar) {

  while (_shift >= (int)this->_key.length())
    _shift = _shift - (int)this->_key.length();
  char keyChar = this->_key.c_str()[_shift];

    if ((cypherchar >= 'a' && cypherchar <= 'z') || (cypherchar >= 'A' && cypherchar <= 'Z')) {
        for (int it = 0; it < this->_array[keyChar]; it += 1) {
            if (cypherchar == 'a')
                cypherchar = 'z';
            else if (cypherchar == 'A')
                cypherchar = 'Z';
            else
                cypherchar -= 1;
        }
    }
    std::cout << cypherchar;
    _shift += 1;
}

void OneTime::reset() {
    _shift = 0;
}