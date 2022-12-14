/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:01:48 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/12 17:36:03 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N = 5;
	int 	i = 0;
	Zombie 	*horde;

	std::cout << "---- 5 zombies ----" << std::endl;
	horde = zombieHorde(N, "Zombie");
	if (horde)
		delete [] horde;

	std::cout << std::endl << "---- 0 zombies ----" << std::endl;
	horde = zombieHorde(0, "Zombie");
	if (horde)
		delete [] horde;

	return (0);
}
