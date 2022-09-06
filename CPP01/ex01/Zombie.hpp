/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:58:13 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/06 19:44:29 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
private:
	std::string	name;
public:
	
	Zombie(void);
	Zombie(std::string	name);
	~Zombie(void);

	void	announce(void);
	void	set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif