/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:12:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/14 18:01:20 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#pragma once

#include <iostream>

class	Fixed {
	private:
		int					_value;
		static int const	_bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const & copy);

		void	operator=(Fixed const & copy);

		~Fixed(void);

		 int	getRawBits(void) const;
		 void	setRawBits(int const raw);
};

#endif
