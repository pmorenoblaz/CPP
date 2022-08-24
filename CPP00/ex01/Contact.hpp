/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:02:08 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/08/24 20:45:39 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {
public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone;
	std::string darkest_secret;

	void	set_first_name(std::string first_name);
	void	set_last_name(std::string last_name);
	void	set_nickname(std::string nickname);
	void	set_phone_number(std::string number);
	void	set_darkest_secret(std::string secret);

	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);

	void	add_name(void);

	void	print_values();

	void	check_value(std::string *value);
	int 	set_info();

	Contact(void);
	~Contact(void);

};

#endif