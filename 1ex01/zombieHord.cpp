#include "Zombie.hpp"

Zombie *zombieHord(int N, std::string name)
{
    if (N <= 0)
    {
        std::cerr << "Error: Number of zombies must be positive." << std::endl;
        return nullptr;
    }
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < 5; ++i)
    {
        horde[i].setName(name + " " + std::to_string(i + 1));
    }
    return horde;
}