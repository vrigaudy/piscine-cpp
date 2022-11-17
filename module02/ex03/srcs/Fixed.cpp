/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:32:55 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/15 06:03:53 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructors

Fixed::Fixed(void)
{
	this->setRawBits(0);
}

Fixed::Fixed(Fixed const & copy)
{
	*this = copy;
}

Fixed::Fixed(int const num)
{
	this->_value = num << Fixed::_bits;
}

Fixed::Fixed(float const num)
{
	this->_value = roundf(num  * (1 << Fixed::_bits));
}

//destructors

Fixed::~Fixed(void) {
}

//Overload operators

Fixed	&Fixed::operator=(Fixed const & copy)
{
	this->_value = copy.getRawBits();
	return *this;
}

//Comparison operators

bool	Fixed::operator>(Fixed const & copy) const
{
	if (this->toFloat() > copy.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(Fixed const & copy) const
{
	if (this->toFloat() >= copy.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator<(Fixed const & copy) const
{
	if (this->toFloat() < copy.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator<=(Fixed const & copy) const
{
	if (this->toFloat() <= copy.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator==(Fixed const & copy) const 
{
	if (this->toFloat()== copy.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(Fixed const & copy) const
{
	if (this->toFloat() != copy.toFloat())
		return true;
	else
		return false;
}

//Arithmetic operators

float	Fixed::operator+(Fixed const & copy) const
{
	return (this->toFloat() + copy.toFloat());
}

float	Fixed::operator-(Fixed const & copy) const
{
	return (this->toFloat() - copy.toFloat());
}

float	Fixed::operator*(Fixed const & copy) const
{
	return (this->toFloat() * copy.toFloat());
}

float	Fixed::operator/(Fixed const & copy) const
{
	return (this->toFloat() / copy.toFloat());
}

//post incrementation operators

Fixed	Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

Fixed	Fixed::operator--(void)
{
	this->_value--;
	return *this;
}

//pre incrementation operators

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->_value++;
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_value--;
	return tmp;
}

//getter

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

//setter

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

//public methods

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << Fixed::_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}

Fixed		&Fixed::min(Fixed & first, Fixed & second)
{
	if (first <= second)
		return first;
	else
		return second;
}

Fixed const	&Fixed::min(Fixed const & first, Fixed const & second)
{
	if (first <= second)
		return first;
	else
		return second;
}

Fixed		&Fixed::max(Fixed & first, Fixed & second)
{
	if (first >= second)
		return first;
	else
		return second;
}

 Fixed const	&Fixed::max(Fixed const & first, Fixed const & second)
{
	if (first >= second)
		return first;
	else
		return second;
}

//stream overload

std::ostream	&operator<<(std::ostream & o, Fixed const & copy)
{
	o << copy.toFloat();
	return (o);
}
