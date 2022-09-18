/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:17:10 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/18 19:17:17 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
		std::cout << "You need to write the level: DEBUG, INFO, WARNING or ERROR" << std::endl;
	else
		karen.complain(argv[1]);
}