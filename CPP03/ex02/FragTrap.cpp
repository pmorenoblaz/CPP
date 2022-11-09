/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:52:56 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/11/08 20:59:20 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {
	this->setName("FragTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap has been created" << std::endl;
}

FragTrap::~FragTrap() { std::cout << "It seems like the FragTrap player have died" << std::endl; }

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Player " << name << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const  & value) : ClapTrap()  {
	*this = value;
}

FragTrap& FragTrap::operator = (const FragTrap &value) {
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

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap have enterred in Gate keeper mode." << std::endl;
}

void FragTrap::attack(std::string const &tar){
	std::cout << "FragTrap " << this->getName() << " attack " << tar << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

// void FragTrap::takeDamage(unsigned int amount){
// 	std::cout << "FragTrap " << this->getName() << " was hit, -" << amount << " points of damage!" << std::endl;
// }

// void FragTrap::beRepaired(unsigned int amount) {
// 	std::cout << "FragTrap " << this->getName() << " was repaired, +" << amount << " points of energy!" << std::endl;
// }

// void FragTrap::setHitPoints(unsigned int hitPoints) {
// 	this->_hitPoints = hitPoints;
// }

// void FragTrap::setEnergyPoints(unsigned int energyPoints) {
// 	this->_energyPoints = energyPoints;
// }

// void FragTrap::setAttackDamage(unsigned int attackDamage) {
// 	this->_attackDamage = attackDamage;
// }

// void FragTrap::setName(std::string name) {
// 	this->_name = name;
// }

// std::string  FragTrap::getName(void) {
// 	return this->_name;
// }

// int  FragTrap::getHitPoints(void) {
// 	return this->_hitPoints;
// }

// int  FragTrap::getEnergyPoints(void) {
// 	return this->_energyPoints;
// }

// int  FragTrap::getAttackDamageST(void) {
// 	return this->_attackDamage;
// }