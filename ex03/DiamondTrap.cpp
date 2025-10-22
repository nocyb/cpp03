/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <njung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:49:03 by njung             #+#    #+#             */
/*   Updated: 2025/10/22 16:04:58 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DefaultDiam_clap_name"), ScavTrap("DefaultDiam"), FragTrap("DefaultDiam")
{
    _name = "DefaultDiam";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap name constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    *this = other;
    std::cout << "DiamondTrap copy constructor called for " << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "DiamondTrap assignment operator called for " << other._name << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called for " << _name << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Hi there, i am " << _name << " and my clap name is " << ClapTrap::_name << std::endl; 
}