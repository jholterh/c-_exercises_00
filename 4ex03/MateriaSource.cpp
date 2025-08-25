#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        _templates[i] = nullptr;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy._templates[i])
            _templates[i] = copy._templates[i]->clone();
        else
            _templates[i] = nullptr;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_templates[i])
            {
                delete _templates[i];
                _templates[i] = nullptr;
            }
        }
        for (int i = 0; i < 4; i++)
        {
        if (other._templates[i])
            _templates[i] = other._templates[i]->clone();
        else
            _templates[i] = nullptr;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        if (_templates[i])
            delete _templates[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!_templates[i])
        {
            _templates[i] = m->clone();
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_templates[i] && _templates[i]->getType() == type)
            return _templates[i]->clone();
    }
    return nullptr;
}
