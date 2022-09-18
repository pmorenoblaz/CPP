/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:41:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/16 12:04:08 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


int	main(int argc, char **argv)
{
	Replace *replace;

	if (argc == 1) {
		replace = new Replace();
		if (replace)
			delete replace;
		
		replace = new Replace("", "hola", "ey");
		if (replace)
			delete replace;

		replace = new Replace("test", "hola", "ey");
		if (replace)
			delete replace;

		replace = new Replace("test2", "HOLA", "EY");
		if (replace)
			delete replace;
	}
	else if (argc == 4)	{
		replace = new Replace(argv[1], argv[2], argv[3]);
		if (replace)
			delete replace;
	}
	else
		std::cout << "Incorrect number of arguments" << std::endl;
	return (0);
}
