/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:31:43 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/10/13 09:42:37 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->_fixedValue = 0;
}

Fixed::~Fixed(){
    return ;
}

Fixed::Fixed(const int value){
	this->_fixedValue = 0;
	this->setRawbits(value * (1<<this->_bits));
}

Fixed::Fixed(const float value){
	this->_fixedValue = 0;
	this->setRawbits(roundf(value * (1<<this->_bits)));
}

Fixed::Fixed(const Fixed &value){
	this->_fixedValue = 0;
	*this = value;
}

Fixed& Fixed::operator=(const Fixed &value){
	this->setRawbits(value.getRawbits());
	return (*this);
}

int Fixed::getRawbits( void ) const{
	return (this->_fixedValue);
}

void  Fixed::setRawbits( int const value ){
	this->_fixedValue = value;
}

float Fixed::toFloat( void ) const{
	return(this->getRawbits() / (float) (1<<_bits));
}

int Fixed::toInt( void ) const{
	return(this->_fixedValue / (1<<_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed &value){
	os << value.toFloat();
	return (os);
}

bool Fixed::operator<(const Fixed &value) const{
	return (this->getRawbits() < value.getRawbits());
}

bool Fixed::operator>(const Fixed &value) const{
	return (this->getRawbits() > value.getRawbits());
}

bool Fixed::operator<=(const Fixed &value) const{
	return (this->getRawbits() <= value.getRawbits());
}

bool Fixed::operator>=(const Fixed &value) const{
	return (this->getRawbits() >= value.getRawbits());
}

bool Fixed::operator==(const Fixed &value) const{
	return (this->getRawbits() == value.getRawbits());
}

bool Fixed::operator!=(const Fixed &value) const{
	return (this->getRawbits() != value.getRawbits());
}

Fixed Fixed::operator+(const Fixed &value) const{
	return (Fixed(this->toFloat() + value.toFloat()));
}

Fixed Fixed::operator-(const Fixed &value) const{
	return (Fixed(this->toFloat() - value.toFloat()));
}

Fixed Fixed::operator*(const Fixed &value) const{
	return (Fixed(this->toFloat() * (float) value.toFloat()));
}

Fixed Fixed::operator/(const Fixed &value) const{
	return (Fixed(this->getRawbits() / (float) value.getRawbits()));
}

Fixed& Fixed::operator++() {
	this->_fixedValue++;
	return (*this);
}

Fixed& Fixed::operator--() {
	this->_fixedValue--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
   	++*this;
	return (temp);
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
   	--*this;
	return (temp);
}

Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2) {
	if (fixed1 <= fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2) {
	if (fixed1 >= fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed& Fixed::min(Fixed const &fixed1, Fixed const &fixed2) {
	if (fixed1 <= fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed& Fixed::max(Fixed const &fixed1, Fixed const &fixed2){
	if (fixed1 >= fixed2)
		return (fixed1);
	return (fixed2);
}
