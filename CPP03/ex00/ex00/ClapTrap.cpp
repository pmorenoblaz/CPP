#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Please, provide a name" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "It seems like you have died" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Creating player!" << std::endl;
	this.setName(name);
	this.setHitPoints(10);
	this.setEnergyPoints(10);
	this.setAttackDamage(0);
}

void attack(std::string const &target){
	std::cout << "ClapTrap " << this.getName() << " attack " target.getName() << ", causing " << this.getAttackDamage() << " points of damage!" << std::endl;
}

void takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this.getName() << " got " << ", causing " << this.getAttackDamage() << " points of damage!" << std::endl;
}

void beRepaired(unsigned int amount) {

}

void setHitPoints(unsigned int hitPoints) {
	this.hitPoints = hitPoints;
}

void setEnergyPoints(unsigned int energyPoints) {
	this.energyPoints = energyPoints;
}

void setAttackDamage(unsigned int attackDamage) {
	this.attackDamage = attackDamage;
}

void setName(std::string name) {
	this.name = name;
}

int  getName(void) {
	return this.name;
}

int  getHitPoints(void) {
	return this.hitPoints;
}

int  getEnergyPoints(void) {
	return this.energyPoints;
}

int  getAttackDamage(void) {
	return this.attackDamage;
}