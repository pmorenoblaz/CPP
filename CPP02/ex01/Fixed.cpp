#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	setRawBits(value * (1<<bits));
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	std::cout << roundf(value * (1<<bits));
	setRawBits(roundf(value * (1<<bits)));
}

Fixed::Fixed(const Fixed &value){
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(value);
}

Fixed& Fixed::operator = (const Fixed &value){
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(value.getRawBits());
	return (*this);
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedValue);
}

void  Fixed::setRawBits( int const raw ){
	this->fixedValue = raw;
}

float Fixed::toFloat( void ) const{
	return((float) this->fixedValue / (float) (1<<bits));
}

int Fixed::toInt( void ) const{
	return(this->fixedValue / (1<<bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed &value){
	os << value.toFloat();
	return (os);
}
