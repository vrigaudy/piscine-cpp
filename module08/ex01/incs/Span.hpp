/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:09:24 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/14 18:09:00 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <cstdlib>

class	Span {
	private:
		unsigned int		_size;
		std::vector<int>	_vec;

		Span(void);
	public:
		Span(unsigned int n);
		Span(Span const & src);

		~Span(void);

		Span&	operator=(Span const & src);

		void	addNumber(int nb);
		void	addNumber(void);

		int	shortestSpan(void) const;
		int	longestSpan(void) const;

		class MaxSize: public std::exception {
			virtual char const * what() const throw() {
				return "The number cannot be added: no room left in the container";
			}
		};

		class NotEnoughMembers: public std::exception {
			virtual char const * what() const throw() {
				return "The container does not have enough members to make a comparison";
			}
		};
};
