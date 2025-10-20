#include "ScavTrap.hpp"

int main() {
    std::cout << "=== Creating first ScavTrap ===" << std::endl;
    ScavTrap st1("Scavvy");

    std::cout << "\n=== Calling ScavTrap actions ===" << std::endl;
    st1.attack("target dummy");
    st1.guardGate();

    std::cout << "\n=== Copy constructing another ScavTrap ===" << std::endl;
    ScavTrap st2(st1);

    std::cout << "\n=== Creating third ScavTrap and using operator= ===" << std::endl;
    ScavTrap st3("Temporary");
    st3 = st1;

    std::cout << "\n=== End of main, destructors will be called ===" << std::endl;
    return 0;
}