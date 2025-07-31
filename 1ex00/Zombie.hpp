#pragma once

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>
#include <iostream>

class Zombie
{
public:
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void);

private:
    Zombie(void);
    std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif // __ZOMBIE_HPP__

