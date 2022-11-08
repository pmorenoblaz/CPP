#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "Please, provide a name to create a player. The player was not created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "It seems like the player have died" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) {
	this->setName(name);
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	std::cout << "Player " << name << " created!" << std::endl;
}

void ClapTrap::attack(std::string const &tar){
	std::cout << "ClapTrap " << this->getName() << " attack " << tar << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->getName() << " was hit, -" << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->getName() << " was repaired, +" << amount << " points of energy!" << std::endl;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
	this->_attackDamage = attackDamage;
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

std::string  ClapTrap::getName(void) {
	return this->_name;
}

int  ClapTrap::getHitPoints(void) {
	return this->_hitPoints;
}

int  ClapTrap::getEnergyPoints(void) {
	return this->_energyPoints;
}

int  ClapTrap::getAttackDamage(void) {
	return this->_attackDamage;
}