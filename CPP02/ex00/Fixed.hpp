/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:12 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/16 12:11:47 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <fstream>
#include <cstdio>

class Fixed {
private:
    int fixedValue;
    static const int bits = 8; 
public:
	Fixed();
	~Fixed();
    Fixed(const Fixed &value);

    Fixed &operator = (const Fixed &value);
    int getRawBits( void ) const;
    void setRawBits( int const raw ); 

};

# endif