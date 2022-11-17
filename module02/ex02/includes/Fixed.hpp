/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:12:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/15 05:53:38 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#pragma once

#include <iostream>
#include <ostream>
#include <cmath>

class	Fixed {
	private:
		int					_value;
		static int const	_bits = 8;
	public:
//constructors
		Fixed(void);
		Fixed(int const num);
		Fixed(float const num);

//copy constructors
		Fixed(Fixed const & copy);

//destructors
		~Fixed(void);

//Overload operators
		Fixed	&operator=(Fixed const & copy);

//Comparison operators
		bool	operator>(Fixed const & copy) const;
		bool	operator>=(Fixed const & copy) const;
		bool	operator<(Fixed const & copy) const;
		bool	operator<=(Fixed const & copy) const;
		bool	operator==(Fixed const & copy) const;
		bool	operator!=(Fixed const & copy) const;

//Arithmetic operators
		float	operator+(Fixed const & copy) const;
		float	operator-(Fixed const & copy) const;
		float	operator*(Fixed const & copy) const;
		float	operator/(Fixed const & copy) const;

//post incrementation operators
		Fixed	operator++(void);
		Fixed	operator--(void);

//pre incrementation operators
		Fixed	operator++(int);
		Fixed	operator--(int);

//getter
		int		getRawBits(void) const;

//setter
		void	setRawBits(int const raw);

//public methods
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed & first, Fixed & second);
		static Fixed const	&min(Fixed const & first, Fixed const & second);
		static Fixed		&max(Fixed & first, Fixed & second);
		static Fixed const	&max(Fixed const & first, Fixed const & second);
};

//stream overload
std::ostream	&operator<<(std::ostream & o, Fixed const & copy);

#endif
