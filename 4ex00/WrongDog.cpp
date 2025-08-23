#include "WrongDog.hpp"

WrongDog::WrongDog() {
    type = "WrongDog";
    std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy) : WrongAnimal(copy) {
    type = copy.type;
    std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other) {
    if (this != &other)
        WrongAnimal::operator=(other);
    std::cout << "WrongDog assignment operator called" << std::endl;
    return *this;
}

WrongDog::~WrongDog() {
    std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound() const {
    std::cout << "woof (wrong)" << std::endl;
}
