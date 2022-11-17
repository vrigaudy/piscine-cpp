/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:25:37 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/17 23:36:07 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {
	Point	a(2.0, 2.0);
	Point	b(1.0, 1.0);
	Point	c(3.0, 1.0);
	Point	point(2.0, 1.5);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	return 0;
}
