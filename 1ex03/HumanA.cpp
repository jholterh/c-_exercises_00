#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream> // Don't forget this for std::cout

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << "\n";
}
