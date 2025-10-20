#include "FragTrap.hpp"

int main() {
    std::cout << "=== Creating first FragTrap ===" << std::endl;
    FragTrap ft1("Fraggy");

    std::cout << "\n=== Testing basic ClapTrap functions ===" << std::endl;
    ft1.attack("enemy target");
    ft1.takeDamage(30);
    ft1.beRepaired(10);

    std::cout << "\n=== Testing special ability ===" << std::endl;
    ft1.highFivesGuys();

    std::cout << "\n=== Copy constructing a new FragTrap ===" << std::endl;
    FragTrap ft2(ft1);

    std::cout << "\n=== Testing assignment operator ===" << std::endl;
    FragTrap ft3("Temporary");
    ft3 = ft1;

    std::cout << "\n=== Using special ability on each ===" << std::endl;
    ft2.highFivesGuys();
    ft3.highFivesGuys();

    std::cout << "\n=== End of main, destructors called automatically ===" << std::endl;
    return 0;
}