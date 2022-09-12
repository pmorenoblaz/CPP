/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:01 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/12 18:53:49 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(void){
// 	return ;
// }

HumanA::HumanA(std::string	name, Weapon weapon){
	this->name = name;
	Weapon wp = weapon;
	return ;
}

HumanA::~HumanA(void){
	std::cout << "Human A destroyed" << std::endl;
	return ;
}

void	HumanA::attack(void){
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}