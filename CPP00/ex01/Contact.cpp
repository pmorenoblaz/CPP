/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:41:53 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/08/24 20:51:54 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <cctype>

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
	std::cout << "Your first name: " << first_name << std::endl;
	std::cout << "Your last name: " << last_name << std::endl;
	std::cout << "Your nickname: " << nickname << std::endl;
	std::cout << "Your phone: " << phone << std::endl;
	std::cout << "Your darkest secret: " << darkest_secret << std::endl;
}

void	Contact::check_value(std::string	*str)
{
	
	while ((*str).length() == 0)
	{
		std::cout << "You have to write some values: ";
		std::cin >> *str;
	}
}

int Contact::set_info()
{
	std::string	str;

	std::cout << "Introduce your first name:" << std::endl;
	std::cin >> str;
	check_value(&str);
	set_first_name(str);
	std::cout << std::endl;
	
	std::cout << "Introduce your last name:" << std::endl;
	std::cin >> str;
	check_value(&str);
	set_last_name(str);
	std::cout << std::endl;

	std::cout << "Introduce your nickname:" << std::endl;
	std::cin >> str;
	check_value(&str);
	set_nickname(str);
	std::cout << std::endl;

	std::cout << "Introduce your phone:" << std::endl;
	std::cin >> str;
	check_value(&str);
	set_phone_number(str);
	std::cout << std::endl;

	std::cout << "Introduce your darkest secret:" << std::endl;
	std::cin >> str;
	check_value(&str);
	set_darkest_secret(str);
	std::cout << std::endl;

	print_values();

	return (0);
}
