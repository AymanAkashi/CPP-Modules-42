/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:25:05 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 15:59:50 by aaggoujj         ###   ########.fr       */
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

/**
 * This function compares the value of the object that calls the function with the value of the object that is passed as a parameter
 * 
 * @param p The parameter that is passed in.
 * 
 * @return A boolean value.
 */
bool Fixed::operator==(const Fixed &p)
{
	return this->num == p.num;
}
/**
 * It adds the value of the parameter to the value of the object.
 * 
 * @return A reference to the object that called the function.
 */

Fixed& Fixed::operator+(const Fixed &p)
{
	this->num += p.num;
	return *this;
}

/**
 * It subtracts the value of the parameter from the value of the object.
 * 
 * @return The object itself.
 */
Fixed& Fixed::operator-(const Fixed &p)
{
	this->num -= p.num;
	return *this;
}

/**
 * It multiplies the two numbers and returns the result.
 * 
 * @return The object itself.
 */
Fixed& Fixed::operator*(const Fixed &p)
{
	this->num *= p.num;
	this->num >>= fract_count;
	return *this;
}

/**
 * It divides the number by the parameter and returns the result.
 * 
 * @return The object itself.
 */
Fixed& Fixed::operator/(const Fixed &p)
{
	this->num <<= fract_count;
	this->num /= p.num;
	return *this;
}

/**
 * This function increments the value of the object by 1.
 * 
 * @return The value of the object after the operation.
 */
Fixed&	Fixed::operator++(void)
{
	this->num++;
	return *this;
}

/**
 * This function returns a copy of the current object, then increments the current object.
 * 
 * @param  `int`: This is the number of bits that will be used to store the fractional part of the number.
 * 
 * @return A copy of the object before the increment.
 */
Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->num++;
	return tmp;
}

/**
 * Decrement the value of the fixed point value by one
 * 
 * @return The value of the object before the operation.
 */
Fixed&	Fixed::operator--(void)
{
	this->num--;
	return *this;
}

/**
 * It returns a copy of the object before the decrement
 * 
 * @param  `int`: This is a dummy parameter. It's not used in the function, but it's required to differentiate between prefix and postfix increment/decrement operators.
 * 
 * @return A copy of the object before the operation.
 */
Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->num--;
	return tmp;
}

/**
 * Return the larger of the two Fixed objects.
 * 
 * @return A reference to the object that is the greater of the two.
 */
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

/**
 * If a is greater than b, return a, otherwise return b.
 * 
 * @return A reference to the object that is the largest.
 */
Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.num > b.num)
		return const_cast<Fixed&>(a);
	return const_cast<Fixed&>(b);
}

/**
 * If a is less than b, return a, otherwise return b.
 * 
 * @return A reference to the smaller of the two values.
 */
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

/**
 * If a is less than b, return a, otherwise return b.
 * 
 * @return A reference to the smaller of the two numbers.
 */
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

/**
 * It takes a reference to an ostream object and a reference to a Fixed object, and returns a reference to an ostream object
 * 
 * @return The ostream object is being returned.
 */
std::ostream& operator<<(std::ostream &out, const Fixed &p)
{
	out << p.toFloat();
	return out;
}

