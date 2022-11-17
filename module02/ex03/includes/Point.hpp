/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:08:31 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/17 23:44:01 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H

# define POINT_H

#pragma once

#include "Fixed.hpp"

class	Point {
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point(void);
		Point(float x, float y);
		Point(Point const & copy);

		void	operator=(Point const & copy);

		~Point(void);

		float	getX(void) const;
		float	getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
