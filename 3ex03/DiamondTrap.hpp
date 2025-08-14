#pragma once

#ifndef DIAMOND_TRAP_H
#define DIAMOND_TRAP_H

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap(const std::string _name);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap &operator=(const DiamondTrap &other);
        DiamondTrap();
        ~DiamondTrap();
        void attack(const std::string& target);
        void whoAmI();

    private:
        std::string _name;

};

#endif