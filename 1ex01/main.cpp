#include "Zombie.hpp"

int main(void)
{
    Zombie *horde = zombieHord(5, "Jakob");
    if (horde)
    {
        for (int i = 0; i < 5; i++)
        {
            horde[i].announce();
        }
    }
    delete[] horde;
    return (0);
}