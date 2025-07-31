#include "Zombie.hpp"

int main(void)
{
    Zombie *dynamicZombie = newZombie("Bob");
    dynamicZombie->announce();
    delete dynamicZombie;
    randomChump("Alice");
}