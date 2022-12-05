/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 04:07:24 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/05 10:35:17 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

#include <iostream>
class Point
{
	private :
		const Fixed _x;
		const Fixed _y;
	public :
		Point();
		~Point();
		Point(const Fixed &x, const Fixed &y);
		Point(const Point &p);
		Point& operator=(const Point &p);
		float get_x() const;
		float get_y() const;
};
float get_area(Point  a, Point  b, Point  c);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif