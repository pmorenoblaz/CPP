/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:52:48 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/11/08 20:58:59 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <fstream>
#include <cstdio>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & value);
	FragTrap& operator = (const FragTrap &value);

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