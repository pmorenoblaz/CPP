/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:52:56 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/11/08 20:59:20 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {
}

ScavTrap::~ScavTrap() {
}

ScavTrap::ScavTrap(std::string name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "Player " << name << " created!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const &tar){
	std::cout << "ScavTrap " << this->getName() << " attack " << tar << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
	std::cout << "ScavTrap " << this->getName() << " was hit, -" << amount << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap " << this->getName() << " was repaired, +" << amount << " points of energy!" << std::endl;
}

void ScavTrap::setHitPoints(unsigned int hitPoints) {
	this->_hitPoints = hitPoints;
}

void ScavTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
}

void ScavTrap::setAttackDamage(unsigned int attackDamage) {
	this->_attackDamage = attackDamage;
}

void ScavTrap::setName(std::string name) {
	this->_name = name;
}

std::string  ScavTrap::getName(void) {
	return this->_name;
}

int  ScavTrap::getHitPoints(void) {
	return this->_hitPoints;
}

int  ScavTrap::getEnergyPoints(void) {
	return this->_energyPoints;
}

int  ScavTrap::getAttackDamage(void) {
	return this->_attackDamage;
}