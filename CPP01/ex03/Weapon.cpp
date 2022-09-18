/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:11:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/18 18:53:34 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
	return ;
}
		
Weapon::Weapon(std::string	type){
	this->type = type;
	return ;
}

Weapon::~Weapon(void){
	return ;
}

std::string	Weapon::getType(void){
	return this->type;
}

void Weapon::setType(std::string type){
	this->type = type;
}