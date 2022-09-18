/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:01:48 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/18 15:48:45 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1 = Zombie("Zombie 1");
	zombie1.announce();

	Zombie* zombie2 = newZombie("Zombie 2");
	zombie2->announce();
	if (zombie2)
		delete zombie2;

	randomChump("Zombie 3");
}
