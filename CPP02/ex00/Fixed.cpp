#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &value){
	std::cout << "Copy constructor called" << std::endl;
	this->fixedValue = value.getRawBits();
}

Fixed& Fixed::operator = (const Fixed &value){
	std::cout << "Assignation operator called" << std::endl;
	this->fixedValue = value.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedValue);
}

void  Fixed::setRawBits( int const raw ){
	this->fixedValue = raw;
}
