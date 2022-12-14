/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:13:25 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/03 15:11:30 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Contact.hpp"
#include "PhoneBook.hpp"

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
	PhoneBook	pb;
	int			i;
	int			latest;
	int			cont;

	if (argc == 1)
	{
		i = -1;
		cont = 0;
		latest = i;
		while (str.compare("EXIT") != 0 || str.compare("ADD") != 0 || str.compare("SEARCH") != 0)
		{
			std::cout << "*******************************************" << std::endl;
			std::cout << "*                   MENU                  *" << std::endl;
			std::cout << "*******************************************" << std::endl;
			std::cout << "*   Select one option:                    *" << std::endl;
			std::cout << "*   - ADD (a new contact)                 *" << std::endl;
			std::cout << "*   - SEARCH (a contact)                  *" << std::endl;
			std::cout << "*   - EXIT (close this program)           *" << std::endl;
			std::cout << "*******************************************" << std::endl << std::endl;
			getline(std::cin, str);
			while (str.compare("EXIT") != 0 && str.compare("ADD") != 0 && str.compare("SEARCH") != 0)
			{
					std::cout << "Wrong option, introduce another one: ";
					getline(std::cin, str);
			}
			if (str.compare("EXIT") == 0)
			{
				std::cout << "Exit PhoneBook\n" << std::endl;
				break ;
			}
			else if (str.compare("ADD") == 0)
			{
				i++;
				if (cont != 8)
					cont++;
				if (i == 8)
				{
					latest = 0;
					i = pb.get_place(latest, i);
				}
				if (cont == 8)
				{
					latest++;
					if (latest == 8)
						latest = 0;
				}
				pb.contacts[i].set_info(i);
			}
			else if (str.compare("SEARCH") == 0)
			{
				pb.print_contacts(i, cont);
			}
		}
		return (0);
	}
}