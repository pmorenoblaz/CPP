#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Please, provide a name" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "It seems like you have died" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Creating player!" << std::endl;
	this->setName(name);
	this->setHitPoints(10);
	this->setEnergyPoints(10);
	this->setAttackDamage(0);
}

void ClapTrap::attack(std::string const &target){
	std::cout << "ClapTrap " << this->getName() << " attack " << &target._name << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->getName() << " got " << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

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