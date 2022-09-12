/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:41:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/12 17:55:08 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "String: " << str << std::endl << std::endl;

	std::cout << "PTR string dir: " << stringPTR << std::endl;
	std::cout << "PTR string: " << *stringPTR << std::endl << std::endl;
	
	std::cout << "REF string dir: " << &stringREF << std::endl;
	std::cout << "REF string: " << stringREF << std::endl << std::endl;


	std::string	str2 = str;
	std::cout << "String 2: " << &str2 << std::endl;
	std::cout << "String 2: " << str2 << std::endl;

	return (0);
}
