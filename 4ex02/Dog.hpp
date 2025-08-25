#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound() const;
        const std::string& getIdea(int index) const;
        void setIdea(int index, const std::string& idea);
    
    private:
        Brain* brain;
};

#endif