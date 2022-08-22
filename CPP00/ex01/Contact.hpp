/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:02:08 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/08/22 18:46:01 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {
// public:
	char	*first_name;
	char	*last_name;
	char	*nickname;
	char	*phone;
	char	*darkest_secret;

	void	set_first_name(char	*first_name);
	void	set_last_name(char *last_name);
	void	set_nickname(char *nickname);
	void	set_phone_number(char *number);
	void	set_darkest_secret(char *secret);

	char	*get_first_name(void);
	char	*get_last_name(void);
	char	*get_nickname(void);
	char	*get_phone_number(void);
	char	*get_darkest_secret(void);

	

};

#endif