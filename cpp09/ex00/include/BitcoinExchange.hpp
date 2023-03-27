/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:29:14 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/03/16 18:39:49 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <iomanip>

#include <ios>

typedef struct s_date
{
	std::string		year;
	std::string		month;
	std::string		day;
	bool	check;
	std::string error;
} t_date ;

void			BitcoinExchange(std::string s);
bool			checking(t_date *date, std::string s);
t_date			check_date2(std::string &d);
std::string 	check_date(std::string &d);
double			get_exchange_rate(std::string &s, char c);
