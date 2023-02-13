/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:07:48 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 12:04:03 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

std::string ScalarConverter::_str;

void	convDouble(std::string &str)
{
	std::stringstream s(str);
	double d;
	s >> d;
	if (str == "+inf" || str == "-inf" || str == "nan" || str == "+inff" || str == "-inff" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (d - static_cast<int>(d) == 0)
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	if (d - static_cast<int>(d) == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	convFloat(std::string &str)
{
	if (str == "+inf" || str == "-inf" || str == "nan" || str == "+inff" || str == "-inff" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	str.erase(str.find('f'), 1);
	std::stringstream s(str);
	float f;
	s >> f;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f - static_cast<int>(f) == 0)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if (f - static_cast<int>(f) == 0)
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(f) << std::endl;

}

void	convInt(std::string &str)
{
	std::stringstream s(str);
	int i;
	s >> i;
	std::cout << "char: ";
	if (i < 0 || i > 127)
		std::cout << "impossible" << std::endl;
	else if (i < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << i << ".0f" << std::endl;
	std::cout << "double: " << i << ".0" << std::endl;
}

void	convChar(std::string &str)
{
	int i;
	if (str == "+inf" || str == "-inf" || str == "nan" || str == "+inff" || str == "-inff" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	if (str[0] >= '0' && str[0] <= '9')
		i = str[0] - '0';
	else
		i = str[0];
	if (i < 32 || i > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << str[0] << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << i << ".0f" << std::endl;
	std::cout << "double: " << i << ".0" << std::endl;
}

void	ScalarConverter::convert(std::string &str)
{
	if (str.length() == 1)
		convChar(str);
	else if (str.find(".") != std::string::npos && str.find("f") == std::string::npos)
		convDouble(str);
	else if (str.find("f") != std::string::npos)
		convFloat(str);
	else
		convInt(str);
}

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &rhs)
{
	*this = rhs;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	ScalarConverter::_str = rhs._str;
	return (*this);
}
