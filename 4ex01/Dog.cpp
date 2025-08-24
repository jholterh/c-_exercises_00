#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    type = "Dog";
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        type = "Dog";
        std::cout << "Dog assignment operator called" << std::endl;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "wuff" << std::endl;
}
