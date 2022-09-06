/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:41:53 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/06 19:16:33 by pmoreno-         ###   ########.fr       */
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
	std::cout << "Zombie destroyed" << std::endl;
	return ;
}

void	Zombie::announce(void){
	std::cout << "<" << this->name << ">  BraiiiiiiinnnzzzZ..." << std::endl;
}
