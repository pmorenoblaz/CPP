/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:17 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/18 18:53:23 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void){
	std::cout << "You can't create a Human B without a name" << std::endl;
}

HumanB::HumanB(std::string	name){
	this->name = name;
    this->weapon = NULL;
	return ;
}

HumanB::~HumanB(void){
	std::cout << "Human B destroyed" << std::endl;
	return ;
}

void	HumanB::attack(void){
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon){
    this->weapon = &weapon;
}