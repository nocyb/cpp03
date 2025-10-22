/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <njung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:45:07 by njung             #+#    #+#             */
/*   Updated: 2025/10/22 15:34:32 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
    ScavTrap(std::string name);
    ScavTrap();
    ScavTrap(const ScavTrap &other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();
    void guardGate(); 
};

#endif