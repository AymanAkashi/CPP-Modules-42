/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:07:06 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/04 21:58:58 by aaggoujj         ###   ########.fr       */
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
		bool operator<(const Fixed &p);
		bool operator>(const Fixed &p);
		bool operator<=(const Fixed &p);
		bool operator>=(const Fixed &p);
		bool operator!=(const Fixed &p);
		bool operator==(const Fixed &p);
		Fixed& operator+(const Fixed &p);
		Fixed& operator-(const Fixed &p);
		Fixed& operator*(const Fixed &p);
		Fixed& operator/(const Fixed &p);
		Fixed&	operator++(void);//pre incr
		Fixed	operator++(int);//post incr
		Fixed&	operator--(void);
		Fixed	operator--(int);
		static Fixed& max(Fixed &a, Fixed &b);
		static Fixed& max(const Fixed &a, const Fixed &b);
		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed& min(const Fixed &a, const Fixed &b);
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &out ,const Fixed &p);

#endif