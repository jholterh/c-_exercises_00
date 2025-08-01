#pragma once
#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
    void attack(void) const;

private:
    std::string _name;
    Weapon &_weapon;
};



#endif