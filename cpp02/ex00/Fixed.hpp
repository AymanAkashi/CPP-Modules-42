/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:07:06 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/07 10:06:02 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed
{
	private :
		int raw;
		static const int fract_count;
	public :
		Fixed();
		~Fixed();
		Fixed(Fixed const &p);
		Fixed const & operator=(Fixed const &p);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
};

#endif