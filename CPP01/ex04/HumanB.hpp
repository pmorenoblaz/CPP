/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:59:52 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/12 18:52:04 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB {
private:
    Weapon      weapon;
	std::string	name;
public:
	
	HumanB(void);
    HumanB(std::string	name);
	~HumanB(void);

	void	attack(void);
    void    setWeapon(Weapon weapon);
};

# endif