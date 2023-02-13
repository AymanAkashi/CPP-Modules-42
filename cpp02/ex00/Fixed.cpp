/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:21:03 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 15:57:53 by aaggoujj         ###   ########.fr       */
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

Fixed::Fixed(Fixed const &p)
{
	std::cout << "Copy constructor called !!" << std::endl;
	*this = p;
}

Fixed const & Fixed::operator=(Fixed const & p)
{
	std::cout << "copy assignment opertor called !!" << std::endl;
	if (this != &p)
		this->raw = p.getRawBits();
	return *this;
}

/**
 * It returns the value of the raw variable
 * 
 * @return The value of the raw variable.
 */
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called !!" << std::endl;
	return (this->raw);
}
/**
 * It sets the raw value of the Fixed object to the value of the parameter
 * 
 * @param raw the raw value of the fixed point value
 */

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called !!" << std::endl;
	this->raw = raw;
}
