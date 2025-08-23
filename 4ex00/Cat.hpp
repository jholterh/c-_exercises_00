#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound() const;

};

#endif