/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** find
*/

#ifndef CESAR_HPP_
# define CESAR_HPP_

#include "IEncryptionMethod.hpp"

class Cesar : virtual public IEncryptionMethod {
    public:
        Cesar();
        virtual ~Cesar();
        virtual void encryptChar(char plainchar);
        virtual void decryptChar(char cipherchar);
        virtual void reset();
    private:
        int	_shift = 3;
};


#endif