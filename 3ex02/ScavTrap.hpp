#pragma once

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap(); 
        void guardGate();
        void attack(const std::string& target);
    private:
};

#endif