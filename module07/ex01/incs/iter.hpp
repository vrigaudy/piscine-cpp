/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:30:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/08 16:44:40 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void	iter(T *tab, int size, void (*f)(T const &)) {
	for (int i = 0; i < size; ++i)
		f(tab[i]);
}

template<typename T>
void	print(T & var) {
	std::cout << var << " ";
}

template<typename T>
void	add(T & var) {
	++var;
}

template<typename T>
void	del(T & var) {
	--var;
}
