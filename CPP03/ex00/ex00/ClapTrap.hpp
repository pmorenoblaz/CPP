/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:12 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/16 12:11:47 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <fstream>
#include <cstdio>

class ClapTrap {
private:
    std::string name;
    int hitPoints = 10;
    int energyPoints = 10;
    int attackDamage = 0;
public:
	ClapTrap();
	~ClapTrap();
    ClapTrap(std::string name);

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setHitPoints(unsigned int hitPoints);
    void setEnergyPoints(unsigned int energyPoints);
    void setAttackDamage(unsigned int attackDamage);
    int  getHitPoints(void);
    int  getEnergyPoints(void);
    int  getAttackDamage(void);
    

};

# endif