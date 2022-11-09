#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	this->setName("ClapTrap");
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	std::cout << "ClapTrap has been created!" << std::endl;
}

ClapTrap::~ClapTrap() {	std::cout << "It seems like the ClaTrap player have died" << std::endl; }

ClapTrap::ClapTrap(std::string name) {
	this->setName(name);
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
	std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & value){
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &value){
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

std::string ClapTrap::getName(void) const {
	return this->_name;
}

int  ClapTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

int  ClapTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

int  ClapTrap::getAttackDamage(void) const {
	return this->_attackDamage;
}