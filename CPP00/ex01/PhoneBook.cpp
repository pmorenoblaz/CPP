/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:26:39 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/08/27 16:33:47 by pmoreno-         ###   ########.fr       */
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
	std::cout << "HOLA";
	while (i < 8)
	{
		if (contacts[i].get_first_name().length() != '\0')
			i++;
		else
			break;
		std::cout << "HOLA";
	}
	return (i);
}

Contact	PhoneBook::get_first_contact()
{
	if (contacts[0].get_first_name().length() != 0)
		return (contacts[0]);
	else
	{
		std::cout << "There are not contacts." << std::endl;
	}
}

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

void	PhoneBook::print_contacts()
{
	int	i;

	i = 0;
	if (get_first_contact().get_first_name().length() != 0)
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "-------------------------------------------" << std::endl;
		std::cout << "----------------- Contacts ----------------" << std::endl;
		std::cout << "   index  |first name|last name | nickname " << std::endl;
	}
	else
	{
		std::cout << "The are not contacts" << std::endl;
		return ;
	}
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
}


