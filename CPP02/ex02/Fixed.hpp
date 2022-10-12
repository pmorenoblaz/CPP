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
#include <cmath>

class Fixed {
private:
	int _fixedValue;
	static const int _bits = 8; 
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &value);
	Fixed(const int value);
	Fixed(const float value);
	
	Fixed &operator = (const Fixed &value);
	int getRawbits( void ) const;
	void setRawbits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator<(const Fixed &value) const;
	bool operator>(const Fixed &value) const;
	bool operator<=(const Fixed &value) const;
	bool operator>=(const Fixed &value) const;
	bool operator==(const Fixed &value) const;
	bool operator!=(const Fixed &value) const;

	Fixed operator+(const Fixed &value) const;
	Fixed operator-(const Fixed &value) const;
	Fixed operator*(const Fixed &value) const;
	Fixed operator/(const Fixed &value) const;

	Fixed operator++(int);
	Fixed operator--(int);
	Fixed& operator++();
	Fixed& operator--();

	static Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static Fixed &max(Fixed &fixed1, Fixed &fixed2);
	const static Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
	const static Fixed &max(Fixed const &fixed1, Fixed const &fixed2);
};

std::ostream& operator<<(std::ostream &os, const Fixed &value);

# endif
