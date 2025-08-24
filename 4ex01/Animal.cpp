#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    type = copy.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        type = other.type;
        std::cout << "Animal assignment operator called" << std::endl;
    }
    return *this;
}

Animal::~Animal()
{
   std::cout << "Animal destructor called" << std::endl; 
}

void Animal::makeSound() const
{
    std::cout << "This is an animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}