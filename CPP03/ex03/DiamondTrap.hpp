/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:52:48 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/11/08 20:58:59 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include <fstream>
#include <cstdio>

#include "ClapTrap.hpp"

class DiamondTrap : public ClapTrap {
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & value);
	DiamondTrap& operator = (const DiamondTrap &value);

	void highFivesGuys(void);

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