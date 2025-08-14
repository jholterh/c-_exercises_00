#pragma once
#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& copy);
        ClapTrap& operator=(const ClapTrap& other);
        ClapTrap();
        ~ClapTrap();
        const std::string& get_name(void) const;
        int get_hit_points(void) const;
        int get_energy_points(void) const;
        int get_attack_damage(void) const;
        void set_hit_points(int hp);
        void set_energy_points(int ep);
        void set_attack_damage(int ad);
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        std::string     _name;
        int             _hit_points;
        int             _energy_points;
        int             _attack_damage;
};

#endif