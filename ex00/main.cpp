#include "ClapTrap.hpp"

int main()
{
    ClapTrap c1("Bob");
    ClapTrap c2("Alice");
    c1.attack("Alice");
    c2.takeDamage(5);
    c2.beRepaired(3);
    for (int i = 0; i < 11; i++) // no more energy?
        c1.attack("Dummy");
    c2.takeDamage(20); // death ?
    c2.attack("Someone");
    c2.beRepaired(10);

    return 0;
}