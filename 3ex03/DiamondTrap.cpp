#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string _name) : ClapTrap(_name + "_clap_name")
{
    this->_name = _name;
    this->set_hit_points(100);
    this->set_energy_points(50);
    this->set_attack_damage(30);
    std::cout << "DiamondTrap: Normal Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    this->_name = copy._name;
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        this->_name = other._name;
        std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
    }
    return *this;
}

DiamondTrap::DiamondTrap() : ClapTrap("DefaultDT_clap_name")
{
    this->_name = "DefaultDT";
    this->set_hit_points(100);
    this->set_energy_points(50);
    this->set_attack_damage(30);
    std::cout << "DiamondTrap: Default Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Diamond Trap Name: " << this->_name << "\n" << "Clap Trap Name: " << ClapTrap::get_name() << std::endl;
}