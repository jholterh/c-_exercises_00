#pragma once

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copy);
        MateriaSource& operator=(const MateriaSource& other);
        virtual ~MateriaSource();

        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(const std::string& type);

    private:
        AMateria* _templates[4];
};

#endif