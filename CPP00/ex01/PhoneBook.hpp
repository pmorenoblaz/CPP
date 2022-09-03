/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:26:35 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/03 14:57:21 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
public:
	
	Contact	contacts[8];

	void    print_phonebook();
	int		get_number_of_contacts();
	Contact	get_first_contact();
	void	print_contacts(int i, int tam);
	void	print_contact_value(std::string value);
	int		get_place(int latest, int index);
	void	get_contact_data(int index);

	PhoneBook(void);
	~PhoneBook(void);

};

#endif