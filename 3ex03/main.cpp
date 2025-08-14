#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== Creating DiamondTrap ===" << std::endl;
    DiamondTrap dt1("Panda");

    std::cout << "\n=== Testing whoAmI ===" << std::endl;
    dt1.whoAmI();

    std::cout << "\n=== Testing attack ===" << std::endl;
    dt1.attack("EvilBot");

    std::cout << "\n=== Testing copy constructor ===" << std::endl;
    DiamondTrap dt2(dt1);
    dt2.whoAmI();

    std::cout << "\n=== Testing assignment operator ===" << std::endl;
    DiamondTrap dt3("AnotherOne");
    dt3 = dt1;
    dt3.whoAmI();

    std::cout << "\n=== Testing default constructor ===" << std::endl;
    DiamondTrap dt4;
    dt4.whoAmI();

    std::cout << "\n=== Testing attack with copy ===" << std::endl;
    dt2.attack("CopyTarget");

    std::cout << "\n=== End of tests ===" << std::endl;
    return 0;
}
