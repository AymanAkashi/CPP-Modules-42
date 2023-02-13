/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:07:06 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/07 10:47:55 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed
{
	private :
		int num;
		static const int fract_count;
	public :
		Fixed();
		~Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &p);
		Fixed& operator=(const Fixed &p);
		float toFloat(void) const;
		int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &out ,const Fixed &p);

#endif