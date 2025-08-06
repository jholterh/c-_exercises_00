#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Torben");
    ClapTrap b = a;
    ClapTrap c ("Clemens");
    c = a;

    a.attack("Amelie");
    a.beRepaired(69);

    std::cout << "a's attack damage: " << a.get_attack_damage() << std::endl;
    std::cout << "b's attack damage: " << b.get_attack_damage() << std::endl;

    std::cout << "a's hit points: " << a.get_hit_points() << std::endl;
    std::cout << "a's energy points: " << a.get_energy_points() << std::endl;

    return 0;
}
