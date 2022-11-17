/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:12:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/15 00:06:36 by vrigaudy         ###   ########.fr       */
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
		Fixed(void);
		Fixed(Fixed const & copy);
		Fixed(int const num);
		Fixed(float const num);

		Fixed	&operator=(Fixed const & copy);

		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream & o, Fixed const & copy);

#endif
