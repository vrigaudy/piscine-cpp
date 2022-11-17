/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:08:21 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/18 01:57:17 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	float	A, B, C, total;

	total = ((a.getX() * (b.getY() - c.getY())
		+ (b.getX() * (c.getY() - a.getY()))
		+ (c.getX() * (a.getY() - b.getY())))) / 2;

	A = ((point.getX() * (b.getY() - c.getY())
		+ (b.getX() * (c.getY() - point.getY()))
		+ (c.getX() * (point.getY() - b.getY())))) / 2;

	B = ((a.getX() * (point.getY() - c.getY())
		+ (point.getX() * (c.getY() - a.getY()))
		+ (c.getX() * (a.getY() - point.getY())))) / 2;

	C = ((a.getX() * (b.getY() - point.getY())
		+ (b.getX() * (point.getY() - a.getY()))
		+ (point.getX() * (a.getY() - b.getY())))) / 2;
	
	if ((A > 0 && B > 0 && C > 0) || (A < 0 && B < 0 && C < 0))
		return true;
	return false;
}
