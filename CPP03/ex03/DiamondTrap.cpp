/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:52:56 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/11/08 20:59:20 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() {
	this->setName("DiamondTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "DiamondTrap has been created" << std::endl;
}

DiamondTrap::~DiamondTrap() { std::cout << "It seems like the DiamondTrap player have died" << std::endl; }

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Player " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const  & value) : ClapTrap()  {
	*this = value;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap &value) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &value)
	{
		this->setName(value.getName());
		this->setHitPoints(value.getHitPoints());
		this->setEnergyPoints(value.getEnergyPoints());
		this->setAttackDamage(value.getAttackDamage());
	}
	return (*this);
}

void DiamondTrap::highFivesGuys() {
    std::cout << "DiamondTrap have enterred in Gate keeper mode." << std::endl;
}

void DiamondTrap::attack(std::string const &tar){
	std::cout << "DiamondTrap " << this->getName() << " attack " << tar << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

// void DiamondTrap::takeDamage(unsigned int amount){
// 	std::cout << "DiamondTrap " << this->getName() << " was hit, -" << amount << " points of damage!" << std::endl;
// }

// void DiamondTrap::beRepaired(unsigned int amount) {
// 	std::cout << "DiamondTrap " << this->getName() << " was repaired, +" << amount << " points of energy!" << std::endl;
// }

// void DiamondTrap::setHitPoints(unsigned int hitPoints) {
// 	this->_hitPoints = hitPoints;
// }

// void DiamondTrap::setEnergyPoints(unsigned int energyPoints) {
// 	this->_energyPoints = energyPoints;
// }

// void DiamondTrap::setAttackDamage(unsigned int attackDamage) {
// 	this->_attackDamage = attackDamage;
// }

// void DiamondTrap::setName(std::string name) {
// 	this->_name = name;
// }

// std::string  DiamondTrap::getName(void) {
// 	return this->_name;
// }

// int  DiamondTrap::getHitPoints(void) {
// 	return this->_hitPoints;
// }

// int  DiamondTrap::getEnergyPoints(void) {
// 	return this->_energyPoints;
// }

// int  DiamondTrap::getAttackDamageST(void) {
// 	return this->_attackDamage;
// }