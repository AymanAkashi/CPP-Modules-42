/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:21:03 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/28 17:56:18 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : num(8), fract_count(8)
{
	std::cout << "Default constructor called !!" <<std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called !!" << std::endl;
}

Fixed::Fixed(Fixed &p)
{
	std::cout << "Copy constructor called !!" << std::endl;
}

Fixed& Fixed::operator<<(Fixed &p)
{
	Fixed &a = p;
	std::cout << "copy assignment opertor called !!" << std::endl;
	return a;
}

float Fixed::toFloat(void) const
{
	
}

int Fixed::toInt(void) const
{
	
}