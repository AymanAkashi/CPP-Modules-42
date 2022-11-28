/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:07:06 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/28 17:55:43 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed
{
	private :
		const int num;
		const int fract_count;
	public :
		Fixed();
		~Fixed();
		Fixed(Fixed &p);
		Fixed& operator<<(Fixed &p);
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif