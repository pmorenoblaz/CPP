/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:17 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/12 18:51:55 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void){
	return ;
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
    this->weapon = weapon;
}