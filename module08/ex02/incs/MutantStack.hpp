/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:24:38 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/17 02:51:57 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class	MutantStack: public std::stack<T> {
	public:
		MutantStack<T>(void) {};
		MutantStack<T>(MutantStack<T> const & src) {*this = src;};

		~MutantStack<T>(void) {};

		MutantStack<T>&	operator=(MutantStack<T> const & src) {
			std::stack<T>::operator=(src);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void) {return this->c.begin();}
		iterator	end(void) {return this->c.end();}
};
