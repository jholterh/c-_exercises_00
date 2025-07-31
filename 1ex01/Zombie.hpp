#pragma once

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>
#include <iostream>

class Zombie
{
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void setName(std::string name);
    void announce(void);

private:
    std::string _name;
};

Zombie *zombieHord(int N, std::string name);

#endif // __ZOMBIE_HPP__

