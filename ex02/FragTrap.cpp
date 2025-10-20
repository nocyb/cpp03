/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <njung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:10:40 by njung             #+#    #+#             */
/*   Updated: 2025/10/20 16:20:09 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap("DefaultFrag")
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ScavTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ScavTrap(other)
{
    std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap assignment operator called for " << other._name << std::endl;
    if (this != &other)
    {
        ScavTrap::operator=(other);
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << _name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five! 🙌" << std::endl;
}