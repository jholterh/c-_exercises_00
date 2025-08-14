#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name)
{
    std::cout << "FragTrap: Normal Constructor called" << std::endl;
    set_hit_points(100);
    set_energy_points(100);
    set_attack_damage(30);
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "FragTrap: Copy operator overload Constructor called" << std::endl;
    }
    return *this;
}

FragTrap::FragTrap() : ClapTrap("DefaultFT_ClapTrap")
{
    set_hit_points(100);
    set_energy_points(100);
    set_attack_damage(30);
    std::cout << "FragTrap: Default Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (get_hit_points() == 0 || get_energy_points() == 0)
        return ;
    set_energy_points(get_energy_points() - 1);
    std::cout << "FragTrap " << get_name() << " attacks " << target << " , causing " << get_attack_damage() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap is in need of a high five" << std::endl;
}