#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "=== ClapTrap Test ===" << std::endl;
    ClapTrap ct("Clappy");
    ct.attack("target1");

    std::cout << "\n=== ScavTrap Test ===" << std::endl;
    ScavTrap st("Scavvy");
    st.attack("target2");
    st.guardGate();

    std::cout << "\n=== Copy Construction Test ===" << std::endl;
    ScavTrap st2(st); // Copy constructor
    st2.attack("target3");

    std::cout << "\n=== Assignment Test ===" << std::endl;
    ScavTrap st3("Another");
    st3 = st;
    st3.attack("target4");

    // --- NEW TESTS ---
    std::cout << "\n=== Energy Depletion Test (ClapTrap) ===" << std::endl;
    for (int i = 0; i < 12; ++i) { // energy is 10
        std::cout << "Attack #" << (i+1) << ": ";
        ct.attack("energyDummy");
    }

    std::cout << "\n=== Energy Depletion Test (ScavTrap) ===" << std::endl;
    for (int i = 0; i < 52; ++i) { // ScavTrap starts with 50 energy
        std::cout << "Attack #" << (i+1) << ": ";
        st.attack("energyDummy");
    }

    std::cout << "\n=== End of main() ===" << std::endl;
    return 0;
}

