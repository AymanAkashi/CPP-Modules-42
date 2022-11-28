/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:21:03 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/28 17:39:03 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract_count = 8;

Fixed::Fixed() : raw(0)
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
	this->raw = p.getRawBits();
}

Fixed& Fixed::operator=(Fixed &p)
{
	Fixed &a = p;
	std::cout << "copy assignment opertor called !!" << std::endl;
	a.raw = p.getRawBits();
	return a;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called !!" << std::endl;
	return (this->raw);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called !!" << std::endl;
	this->raw = raw;
}
