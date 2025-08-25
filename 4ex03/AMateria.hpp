#pragma once

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria();
        AMateria(const AMateria& copy);
        AMateria& operator=(const AMateria& other);
        virtual ~AMateria();
        AMateria(const std::string& type);
        const std::string& getType()const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected:
        std::string type;
};

#endif