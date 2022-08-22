/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:13:25 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/08/22 18:47:15 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

static void ft_putchar_toupper(char c)
{
	std::cout << (char) toupper(c);
}

static void ft_print_args(char *argv[])
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar_toupper(argv[i][j]);
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	std::string	str;

	if (argc == 1)
	{
		std::cout << "Introduce one option:" << std::endl;
		std::cout << " - ADD (a new contact)" << std::endl;
		std::cout << " - SEARCH (a contact)" << std::endl;
		std::cout << " - EXIT (close this program)" << std::endl << std::endl;
		std::cin >> str;
		while (str.compare("EXIT") != 0 || str.compare("ADD") != 0 || str.compare("SEARCH") != 0)
		{
			if (str.compare("EXIT") == 0)
			{
				std::cout << "List closed\n" << std::endl;
				break ;
			}
			if (str.compare("ADD") == 0)
				return (1);
			if (str.compare("SEARCH") == 0)
				return (2);
			else
			{
				std::cout << "Wrong option, introduce another one: ";
				std::cin >> str;
			}
		}
		return (0);
	}
}