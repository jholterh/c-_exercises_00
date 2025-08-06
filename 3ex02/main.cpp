#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    std::cout << "=== Creating FragTrap ft1 ===" << std::endl;
    FragTrap ft1("Panda");

    std::cout << "\n=== Testing highFivesGuys() ===" << std::endl;
    ft1.highFivesGuys();

    std::cout << "\n=== Copy constructing ft2 from ft1 ===" << std::endl;
    FragTrap ft2(ft1);

    std::cout << "\n=== Assigning ft3 = ft1 ===" << std::endl;
    FragTrap ft3("Bear");
    ft3 = ft1;

    std::cout << "\n=== Testing attack() method ===" << std::endl;
    ft1.attack("target1");
    ft2.attack("target2");
    ft1.takeDamage(5);
    ft2.beRepaired(3);
    
    std::cout << "\n=== Checking attribute values ===" << std::endl;
    std::cout << "ft1: " << ft1.get_name()
              << ", HP: " << ft1.get_hit_points()
              << ", EP: " << ft1.get_energy_points()
              << ", AD: " << ft1.get_attack_damage() << std::endl;

    std::cout << "ft2: " << ft2.get_name()
              << ", HP: " << ft2.get_hit_points()
              << ", EP: " << ft2.get_energy_points()
              << ", AD: " << ft2.get_attack_damage() << std::endl;

    std::cout << "ft3: " << ft3.get_name()
              << ", HP: " << ft3.get_hit_points()
              << ", EP: " << ft3.get_energy_points()
              << ", AD: " << ft3.get_attack_damage() << std::endl;

    std::cout << "\n=== End of main, destructors will be called ===" << std::endl;
    return 0;
}


