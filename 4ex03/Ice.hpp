#pragma once

#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& copy);
        Ice& operator=(const Ice& other);
        virtual ~Ice();

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif