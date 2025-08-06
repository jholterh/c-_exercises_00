#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name)
{
    std::cout << "ScavTrap: Normal Constructor called" << std::endl;
    set_hit_points(100);
    set_energy_points(50);
    set_attack_damage(20);
}

ScavTrap::ScavTrap(const ScavTrap& copy)
    : ClapTrap(copy)
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "ScavTrap: Copy operator overload Constructor called" << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate Keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (get_hit_points() == 0 || get_energy_points() == 0)
        return ;
    set_energy_points(get_energy_points() - 1);
    std::cout << "ScavTrap " << get_name() << " attacks " << target << " , causing " << get_attack_damage() << " points of damage!" << std::endl;
}