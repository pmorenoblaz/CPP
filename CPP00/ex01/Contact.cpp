/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:41:53 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/08/22 18:52:18 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <cctype>

void	Contact::set_first_name(char	*first_name)
{
	this->first_name = first_name;
}

void	Contact::set_last_name(char *last_name)
{
	this->last_name = last_name;
}

void	Contact::set_nickname(char *nickname)
{
	this->nickname = nickname;
}

void	Contact::set_phone_number(char *number)
{
	this->phone = number;
}

void	Contact::set_darkest_secret(char *secret)
{
	this->darkest_secret = secret;
}

char	*Contact::get_first_name(void)
{
	return (this->first_name);
}

char	*Contact::get_last_name(void)
{
	return (this->last_name);
}

char	*Contact::get_nickname(void)
{
	return (this->nickname);
}

char	*Contact::get_phone_number(void)
{
	return (this->phone);
}

char	*Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

int		Contact::check_value(char *value)

int set_info(int argc, char *argv[])
{
	std::string	str;

	std::cout << "Introduce your first name:" << std::endl;
	std::cin >> str;

	std::cout << "Introduce your last name:" << std::endl;
	std::cin >> str;
	std::cout << "Introduce your nickname:" << std::endl;
	std::cin >> str;
	std::cout << "Introduce your phone:" << std::endl;
	std::cin >> str;
	std::cout << "Introduce your darkest secret:" << std::endl;
	std::cin >> str;
}
