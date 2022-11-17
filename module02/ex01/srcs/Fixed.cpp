/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:32:55 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/15 00:17:45 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std:: cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(Fixed const & copy) {
	std:: cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const num) {
	std:: cout << "Int constructor called" << std::endl;
	this->_value = num << Fixed::_bits;
}

Fixed::Fixed(float const num) {
	std:: cout << "Float constructor called" << std::endl;
	this->_value = roundf(num  * (1 << Fixed::_bits));
}

Fixed	&Fixed::operator=(Fixed const & copy) {
	std:: cout << "Copy assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {
	std:: cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std:: cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)this->_value / (float)(1 << Fixed::_bits));
}

int		Fixed::toInt(void) const {
	return (this->_value >> Fixed::_bits);
}

std::ostream	&operator<<(std::ostream & o, Fixed const & copy) {
	o << copy.toFloat();
	return (o);
}
