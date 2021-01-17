/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** find
*/

#include <iostream>
#include "Cesar.hpp"

void Cesar::encryptChar(char plainchar) 
{
    if ((plainchar >= 'a' && plainchar <= 'z') || (plainchar >= 'A' && plainchar <= 'Z')) {
        for (int i = 0; i < _shift; i += 1) {
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

void Cesar::decryptChar(char cipherchar) 
{
    if ((cipherchar >= 'a' && cipherchar <= 'z') || (cipherchar >= 'A' && cipherchar <= 'Z')) {
        for (int i = 0; i < _shift; i++) {
            if (cipherchar == 'a')
	            cipherchar = 'z';
            else if (cipherchar == 'A')
	            cipherchar = 'Z';
            else
	            cipherchar -= 1;
        }
    }
    std::cout << cipherchar;
    _shift += 1;
}

void Cesar::reset() 
{
  _shift = 3;
}