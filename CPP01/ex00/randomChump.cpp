/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:37:12 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/18 17:23:05 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie *zombie = new Zombie(name);
    zombie->announce();
    if (zombie)
        zombie->~Zombie;
}