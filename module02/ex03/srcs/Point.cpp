/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:58:52 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/17 23:43:45 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){
}

Point::Point(float x, float y) : _x(x), _y(y) {
}

Point::Point(Point const & copy) : _x(copy._x), _y(copy._y) {
}

void	Point::operator=(Point const & copy) {
	(void)copy;
}

Point::~Point(void) {
}

float	Point::getX(void) const {
	return this->_x.toFloat();
}

float	Point::getY(void) const {
	return this->_y.toFloat();
}
