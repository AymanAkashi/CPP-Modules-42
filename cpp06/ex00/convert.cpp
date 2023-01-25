/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:07:48 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/20 15:48:44 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

convert::convert()
{
}

convert::convert(std::string &str)
{
	_str = str;
}

convert::~convert()
{
}

convert::convert(convert const &rhs)
{
	*this = rhs;
}

convert &convert::operator=(convert const &rhs)
{
	(void)rhs;
	return (*this);
}

bool isnan(std::string str)
{
	if (str == "nan" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff" || str == "nanf")
		return true;
	return false;
}

int	convert::Toint(void)
{
	for(size_t i = 0; i < this->_str.size(); i++)
	{
		if (isnan(this->_str))
			return INT_MAX;
	}
	return (std::atoi(this->_str.c_str()));
}

void	convert::Tochar(void)
{

	int x = this->Toint();

	this->_int = x;
	if (isnan(this->_str))
		std::cout << "char: impossible" << std::endl;
	else if ( x < 32 || x > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(x) << '\'' << std::endl;
}

void	convert::print_int(void)
{
	if (this->_str == "nan" || this->_str == "+inf" || this->_str == "-inf" || this->_int == INT_MAX)
		std::cout << "int: impossible" <<  std::endl;
	else
		std::cout << "int: " << this->_int << std::endl;
}

void	convert::Tofloat()
{
	if (this->_str == "nan" || this->_str == "+inf" || this->_str == "-inf" || this->_int == INT_MAX)
		std::cout << "float: "<< this->_str << "f" << std::endl;
	else if (this->_str.find('.') != std::string::npos)
		std::cout << "float: " << std::stof(this->_str) << "f" << std::endl;
	else
		std::cout << "float: " << std::stof(this->_str) << ".0f" << std::endl;
}

void	convert::Todouble()
{
	if (this->_str == "nan" || this->_str == "+inf" || this->_str == "-inf" || this->_int == INT_MAX)
		std::cout << "double: "<< this->_str  << std::endl;
	else if (this->_str.find('.') != std::string::npos)
	{
		std::cout << "double: " << std::stod(this->_str) << std::endl;
	}
	else
	{
		std::cout << "double: " << this->_int << ".0" << std::endl;
	}

}


