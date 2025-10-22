#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== Creating first DiamondTrap ===" << std::endl;
    DiamondTrap d1("Bob");

    std::cout << "\n=== Basic actions ===" << std::endl;
    d1.attack("the dummy target");
    d1.takeDamage(20);
    d1.beRepaired(10);

    std::cout << "\n=== Identity check ===" << std::endl;
    d1.whoAmI();

    std::cout << "\n=== Copy constructing another DiamondTrap ===" << std::endl;
    DiamondTrap d2(d1);

    std::cout << "\n=== Using operator= to copy ===" << std::endl;
    DiamondTrap d3("Temporary");
    d3 = d1;

    std::cout << "\n=== Testing whoAmI() on both copies ===" << std::endl;
    d2.whoAmI();
    d3.whoAmI();

    std::cout << "\n=== End of main, destructors will be called ===" << std::endl;
    return 0;
}