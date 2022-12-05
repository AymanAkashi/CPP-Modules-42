/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:21:03 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/03 19:54:28 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract_count = 8;

Fixed::Fixed() : num(0)
{
	std::cout << "Default constructor called !!" <<std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called !!" << std::endl;
}

Fixed::Fixed(const int integer) : num(integer << this->fract_count)
{
	std::cout << "Int constructor called !!" << std::endl;
	return ;
}

Fixed::Fixed(const float integer)
{
	float f;

	f = integer * (1 << this->fract_count);
	this->num = static_cast<int>(f);
	if (f - (int)f > 0.5)
		this->num++;
	std::cout << "Float constructor called !!" << std::endl;
}

Fixed::Fixed(const Fixed &p) : num(p.num)
{
	std::cout << "Copy constructor called !!" << std::endl;
	return;
}

Fixed& Fixed::operator=(const Fixed &p)
{
	this->num = p.num;
	std::cout << "copy assignment opertor called !!" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &out ,const Fixed &p)
{
	out << p.toFloat();
	return (out);
}

float Fixed::toFloat(void) const
{
	float f;

	f = static_cast<float>(this->num) / (1 << this->fract_count);
	return (f);
}

int Fixed::toInt(void) const
{
	int num;

	num = this->num >> this->fract_count;
	return (num);
}
