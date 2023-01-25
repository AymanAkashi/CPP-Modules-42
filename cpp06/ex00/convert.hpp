/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:07:29 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/20 12:58:27 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef convert_HPP
#define convert_HPP

#include<iostream>

#define INT_MAX	2147483647
#define INT_MIN -2147483648


class convert
{
	public:
		convert();
		convert(std::string &str);
		~convert();
		convert(convert const &rhs);
		convert &operator=(convert const &rhs);
		int Toint(void);
		void print_int(void);
		void Tofloat(void);
		void Todouble(void);
		void Tochar(void);
		bool ischar(void);
		bool isint(void);
		bool isfloat(void);
		bool isdouble(void);
	private:
		std::string _str;
		int _int;
		float _float;
		double _double;
};

#endif