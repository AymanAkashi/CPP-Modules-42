/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:08:56 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/11 13:04:11 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool checking_arg(std::string &str)
{
	bool Dot = false;
	if ( str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
		return (false);
	if (str.length() != 1)
		for(size_t i = 0; i < str.length(); i++)
			if (str[i] != '.' && str[i] != 'f' && !isdigit(str[i]) && str[i] != '-' && str[i] != '+')
				return (true);
	for(size_t i = 0; i < str.size(); i++)
	{
		if (Dot == true && str[i] == '.')
			return (true);
		if (str[i] == '.')
			Dot = true;
		if (str[i] == 'f' && str[i + 1] != '\0')
			return (true);
	}
	return (false);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert <string> !!!" << std::endl;
		return (1);
	}
	std::string str(av[1]);
	if (checking_arg(str))
	{
		std::cerr << "Error: invalid Type" << std::endl;
		return (1);
	}
	ScalarConverter::convert(str);
	return (0);
}