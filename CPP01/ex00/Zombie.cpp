/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:41:53 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/06 16:58:21 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void){
	return ;
}

Zombie::Zombie (std::string name){
	this->name = name;
	return ;
}

Zombie::~Zombie (void){
	return ;
}

void	Zombie::announce(void){
	std::cout << "<" << this->name << ">  BraiiiiiiinnnzzzZ...";
}
