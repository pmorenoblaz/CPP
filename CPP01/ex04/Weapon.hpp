/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:26 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/12 18:08:36 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
private:
	std::string	type;
public:
	
	Weapon(void);
	Weapon(std::string	type);
	~Weapon(void);

	std::string	getType(void);
    void	    setType(std::string type);
};

# endif