/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:34:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/11/07 13:53:11 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

template <typename T>
void	swap(T & lfs, T & rhs) {
	T	tmp;

	tmp = rhs;
	rhs = lfs;
	lfs = tmp;
}

template <typename T>
T	max(T const & lfs, T const & rhs) {
	return ((lfs > rhs) ? lfs : rhs);
}

template <typename T>
T	min(T const & lfs, T const & rhs) {
	return ((lfs < rhs) ? lfs : rhs);
}
