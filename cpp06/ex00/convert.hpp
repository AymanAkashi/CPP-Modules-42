/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:07:29 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/11 10:06:06 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef convert_HPP
#define convert_HPP

#include<iostream>
#include <sstream>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &rhs);
	public:
		static std::string _str;
		static void	convert(std::string &str);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter const &rhs);
};

#endif