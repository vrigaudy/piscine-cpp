/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:32:55 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/14 18:01:35 by vrigaudy         ###   ########.fr       */
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

void	Fixed::operator=(Fixed const & copy) {
	std:: cout << "Copy assignment operator called" << std::endl;
	this->_value = copy.getRawBits();

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
