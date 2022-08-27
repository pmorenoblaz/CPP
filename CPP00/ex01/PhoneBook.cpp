/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:26:39 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/08/27 18:23:30 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook (void)
{
	return ;
}

PhoneBook::~PhoneBook (void)
{
	return ;
}

int	PhoneBook::get_number_of_contacts()
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].get_first_name().length() != '\0')
			i++;
		else
			break;
	}
	return (i);
}

// Contact	PhoneBook::get_first_contact()
// {
// 	if (contacts[0].get_first_name().length() != 0)
// 		return (contacts[0]);
// 	else
// 	{
// 		std::cout << "WOLOLO" << std::endl;
// 	}
// }

int	PhoneBook::get_place(int latest, int index)
{
	if (index > 8)
		return (latest);
	else
		return (index);
}

void	PhoneBook::print_contact_value(std::string value)
{
	int			i;
	size_t		len;

	i = 0;
	std::cout << "|";
	while (i + value.length() < 10)
	{
		std::cout << " ";
		i++;
	}
	if (value.length() > 10)
		std::cout << value.substr(0, 9) << ".";
	else
		std::cout << value;
}

void	PhoneBook::get_contact_data(int index)
{
	std::string	str;
	int			num;

	std::cout << "Introduce one index:" << std::endl;
	std::cin >> str;
	num = atoi(str.c_str());
	std::cout << num << std::endl;
	while (num < 0 || num > index || num > 7)
	{
		std::cout << "Wrong option, introduce another one: ";
		std::cin >> str;
		num = atoi(str.c_str());
	}
	if (contacts[num].get_first_name().length() != 0)
		contacts[num].print_values();
}

void	PhoneBook::print_contacts(int index)
{
	int	i;

	i = 0;
	if (index > -1)
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "-------------------------------------------" << std::endl;
		std::cout << "----------------- Contacts ----------------" << std::endl;
		std::cout << "   index  |first name|last name | nickname " << std::endl;
		std::cout << "-------------------------------------------" << std::endl;
		while (contacts[i].get_first_name().length() != 0)
		{
			std::cout << "         " << i;
			print_contact_value(contacts[i].first_name);
			print_contact_value(contacts[i].last_name);
			print_contact_value(contacts[i].nickname);
			i++;
			std::cout << std::endl;
		}
		std::cout << "-------------------------------------------" << std::endl;
		std::cout << std::endl << std::endl << std::endl;
		get_contact_data(i - 1);
	}
	else
	{
		std::cout << "The are not contacts. " << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		return ;
	}
}


