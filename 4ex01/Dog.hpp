#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound() const;
    
    private:
        Brain* brain;
};

#endif