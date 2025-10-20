/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <njung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:06:39 by njung             #+#    #+#             */
/*   Updated: 2025/10/20 18:52:33 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ScavTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif