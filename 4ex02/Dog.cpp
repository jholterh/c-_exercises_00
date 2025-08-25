#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    type = "Dog";
    brain = new Brain(*copy.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        type = other.type;
        delete brain;
        brain = new Brain(*other.brain);
        std::cout << "Dog assignment operator called" << std::endl;
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "wuff" << std::endl;
}

const std::string& Dog::getIdea(int index) const
{
    return brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string& idea)
{
    brain->setIdea(index, idea);
}