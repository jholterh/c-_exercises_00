#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    type = copy.type;
    brain = new Brain(*copy.brain);
    std::cout << "Cat copy constructor called" << std::endl;

}

Cat& Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        type = other.type;
        delete brain;
        brain = new Brain(*other.brain);
        std::cout << "Cat assignment operator called" << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "miau" << std::endl;
}

const std::string& Cat::getIdea(int index) const
{
    return brain->getIdea(index);
}

void Cat::setIdea(int index, const std::string& idea)
{
    brain->setIdea(index, idea);
}