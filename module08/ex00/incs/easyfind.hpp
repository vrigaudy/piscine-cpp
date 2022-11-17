/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:14:07 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/14 11:06:49 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

class	noFind: public std::exception {
	virtual char const * what() const throw () {
		return "element not found";
	}
};

template<typename T>
typename T::iterator	easyfind (T & cont, int i) {
	typename T::iterator	res = find(cont.begin(), cont.end(), i);
	if (res != cont.end())
		return res;
	else
		throw noFind();
}
