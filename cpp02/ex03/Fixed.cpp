/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:25:05 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/05 10:38:56 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract_count = 8;

Fixed::Fixed() : num(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int num) : num(num << fract_count)
{
}

Fixed::Fixed(const float num) : num(roundf(num * (1 << fract_count)))
{
}

Fixed::Fixed(const Fixed &p) : num(p.num)
{
}

Fixed& Fixed::operator=(const Fixed &p)
{
	this->num = p.num;
	return *this;
}

bool Fixed::operator<(const Fixed &p)
{
	return this->num < p.num;
}

bool Fixed::operator>(const Fixed &p)
{
	return this->num > p.num;
}

bool Fixed::operator<=(const Fixed &p)
{
	return this->num <= p.num;
}

bool Fixed::operator>=(const Fixed &p)
{
	return this->num >= p.num;
}

bool Fixed::operator!=(const Fixed &p)
{
	return this->num != p.num;
}

bool Fixed::operator==(const Fixed &p)
{
	return this->num == p.num;
}

Fixed& Fixed::operator+(const Fixed &p)
{
	this->num += p.num;
	return *this;
}

Fixed& Fixed::operator-(const Fixed &p)
{
	this->num -= p.num;
	return *this;
}

Fixed& Fixed::operator*(const Fixed &p)
{
	this->num *= p.num;
	this->num >>= fract_count;
	return *this;
}

Fixed& Fixed::operator/(const Fixed &p)
{
	this->num <<= fract_count;
	this->num /= p.num;
	return *this;
}

Fixed&	Fixed::operator++(void)
{
	this->num++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->num++;
	return tmp;
}

Fixed&	Fixed::operator--(void)
{
	this->num--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->num--;
	return tmp;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.num > b.num)
		return const_cast<Fixed&>(a);
	return const_cast<Fixed&>(b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.num < b.num)
		return const_cast<Fixed&>(a);
	return const_cast<Fixed&>(b);
}

int Fixed::toInt(void) const
{
	return this->num >> fract_count;
}

float Fixed::toFloat(void) const
{
	return (float)this->num / (1 << fract_count);
}

std::ostream& operator<<(std::ostream &out, const Fixed &p)
{
	out << p.toFloat();
	return out;
}