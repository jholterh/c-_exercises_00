#pragma once

#ifndef WRONGWrongDOG_HPP
#define WRONGWrongDOG_HPP

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(const WrongDog &copy);
        WrongDog &operator=(const WrongDog &other);
        ~WrongDog();
        void makeSound() const;
};

#endif