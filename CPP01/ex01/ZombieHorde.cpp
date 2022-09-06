/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:26:39 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/06 19:53:25 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdio.h>
#include <stdlib.h>

Zombie* zombieHorde( int N, std::string name ){
	int     i;
    Zombie  *zombies = new Zombie[N];

    i = 0;
    if (N < 1)
        return (NULL);
    while (i < N){
        std::cout << "Number: " << i;
        zombies[i].set_name(name);
        zombies[i].announce();
        i++;
    } 
    return (zombies);
}


