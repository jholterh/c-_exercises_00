#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap: Normal Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : _name(copy._name), _hit_points(copy._hit_points), _energy_points(copy._energy_points), _attack_damage(copy._attack_damage)
{
    std::cout << "ClapTrap: Copy Constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap: Copy operator overload Constructor called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hit_points = other._hit_points;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: Destructor called" << std::endl;
}


// getters

const std::string& ClapTrap::get_name(void) const
{
    return _name;
}

int ClapTrap::get_hit_points(void) const
{
    return _hit_points;
}

int ClapTrap::get_energy_points(void) const
{
    return _energy_points;
}

int ClapTrap::get_attack_damage(void) const
{
    return _attack_damage;
}


// setters

void ClapTrap::set_hit_points(int hp)
{
    _hit_points = hp;
}

void ClapTrap::set_energy_points(int ep)
{
    _energy_points = ep;
}

void ClapTrap::set_attack_damage(int ap)
{
    _attack_damage = ap;
}


// game methods

void ClapTrap::attack(const std::string& target)
{
    if (_hit_points == 0 || _energy_points == 0)
        return ;
    _energy_points--;
    std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points == 0)
        return ;
    _hit_points -= amount;
    if (_hit_points < 0)
        _hit_points = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit_points == 0 || _energy_points == 0)
        return ;
    _hit_points += amount;
    _energy_points--;
}