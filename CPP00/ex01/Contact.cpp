/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:41:53 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/03 13:32:09 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact (void)
{
	return ;
}

Contact::~Contact (void)
{
	return ;
}

void	Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_phone_number(std::string number)
{
	this->phone = number;
}

void	Contact::set_darkest_secret(std::string secret)
{
	this->darkest_secret = secret;
}

void	Contact::set_index(int i)
{
	this->index = i;
}

std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_phone_number(void)
{
	return (this->phone);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

void	Contact::print_values()
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone: " << phone << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
	std::cout << std::endl << std::endl;
}

void	Contact::check_value(std::string *str)
{
	while ((*str).length() == 0)
	{
		std::cout << "You have to write a value: ";
		getline(std::cin, *str);
	}
	
}

int Contact::set_info(int i)
{
	std::string str;

	std::cout << "Introduce the first name:" << std::endl;
	std::getline(std::cin, str);
	check_value(&str);
	set_first_name(str);
	std::cout << std::endl;
	
	std::cout << "Introduce the last name:" << std::endl;
	std::getline(std::cin, str);
	check_value(&str);
	set_last_name(str);
	std::cout << std::endl;

	std::cout << "Introduce the nickname:" << std::endl;
	std::getline(std::cin, str);
	check_value(&str);
	set_nickname(str);
	std::cout << std::endl;

	std::cout << "Introduce the phone:" << std::endl;
	std::getline(std::cin, str);
	check_value(&str);
	set_phone_number(str);
	std::cout << std::endl;

	std::cout << "Introduce the darkest secret:" << std::endl;
	std::getline(std::cin, str);
	check_value(&str);
	set_darkest_secret(str);
	std::cout << std::endl;

	set_index(i);

	print_values();

	return (0);
}
