#include "AMateria.hpp"

AMateria::AMateria() : type("Unknown Materia") {}

AMateria::AMateria(const std::string& type) : type(type) {}

AMateria::AMateria(const AMateria& copy) : type(copy.type) {}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

AMateria::~AMateria() {}

const std::string& AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}