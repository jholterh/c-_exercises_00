#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
        const std::string& getIdea(int index) const;
        void setIdea(int index, const std::string& idea);

    private:
        Brain* brain;
};

#endif