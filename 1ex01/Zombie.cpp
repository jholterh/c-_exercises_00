#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Unnamed") {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void)
{
    std::cout << _name << " has been destoyed." << std::endl;
}

void Zombie::setName(std::string name) { _name = name;}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
