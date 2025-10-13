/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <njung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:37:50 by njung             #+#    #+#             */
/*   Updated: 2025/10/13 16:23:08 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage" << std::endl;
        _energyPoints--;   
    }
    else
    {
        if (_energyPoints <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have enough energy to attack" << std::endl;
        else
            std::cout << "ClapTrap " << _name << " doesn't have enough hitPoints to attack" << std::endl;
    }
}   

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= amount)
    {
        _hitPoints = 0;
    }
    else
    {
        _hitPoints -= amount;
    }
    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage" << std::endl;    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " repaired itself for " << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " cannot repair itself anymore!" << std::endl;
}