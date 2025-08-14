#pragma once

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& copy);
        FragTrap& operator=(const FragTrap& other);
        FragTrap();
        ~FragTrap();
        void highFivesGuys(void);
        void attack(const std::string& target);

    private:

};

#endif