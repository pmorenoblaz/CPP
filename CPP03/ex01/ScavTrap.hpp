/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:52:48 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/11/08 20:58:59 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <fstream>
#include <cstdio>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & value);
	ScavTrap& operator = (const ScavTrap &value);

	void guardGate();

	void attack(std::string const &target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	// void setHitPoints(unsigned int hitPoints);
	// void setEnergyPoints(unsigned int energyPoints);
	// void setAttackDamage(unsigned int attackDamage);
	// void setName(std::string name);

	// int  getHitPoints(void);
	// int  getEnergyPoints(void);
	// int  getAttackDamageST(void);
	// std::string  getName(void);

};

# endif