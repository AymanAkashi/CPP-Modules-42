/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:36:21 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/03/26 12:33:37 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int len_num(int n)
{
	int len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	if (len == 1)
		return 2;
	return len;
}

bool checking(t_date *date, std::string s)
{
	std::stringstream ss;
	int year;
	int month;
	int day;
	ss << date->year;
	ss >> year;
	ss.clear();
	ss << date->month;
	ss >> month;
	ss.clear();
	ss << date->day;
	ss >> day;
	if (year == 0 || month <= 0 || day <= 0 || year > 2023 || month > 12 || day > 31)
	{
		date->error = "Error: bad input => " + s;
		return false;
	}
	if ((year % 4 != 0 && month == 2 && day >= 29) || (year % 4 == 0 & month == 2 && day > 29))
	{
		date->error = "Error: bad input Date Not existing ";
		return false;
	}
	if (month % 2 == 0 && month > 30 && month != 8)
	{
		date->error = "Error: bad input => Date Not existing " + date->year + "-" + date->month + "-" + date->day;
		return false;
	}
	return true;
}

t_date check_date2(std::string &d)
{
	t_date date;

	 unsigned long pos = d.find('-');
	if (pos !=  std::string::npos)
		date.year = d.substr(0, pos);
	unsigned long pos1 = d.find('-', pos+1);
	if (pos1 !=  std::string::npos)
		date.month = d.substr(pos+1, pos1-pos-1);
	date.day = d.substr(pos1+1, 2);
	if (!checking(&date, d))
		return date;
	pos = d.find('|');
	if (pos != std::string::npos)
		return date;
	date.error =  "Error: bad input =>" + d;
	return date;
}

std::string check_date(std::string &d)
{
	std::string s = "";
	const unsigned long pos = d.find(',', 0);
	if (pos != std::string::npos)
		s = d.substr(0, pos);
	return s;
}

bool double_eq(double f1, double f2)
{
	if (f1 > f2)
  		return (f1 - f2) > 0.00001;
	else
		return (f2 - f1) > 0.00001;
}

bool	check_double(std::string s)
{
	size_t dot = 0;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == '.')
			dot++;
		if (!isdigit(s[i]) && s[i] != '.')
			return false;
	}
	if (dot > 1)
		return false;
	return true;

}

double	get_exchange_rate(std::string &s, char c)
{
	double d = 0.0;
	const unsigned long pos = s.find(c, 0);
	std::string tmp = s.substr(pos + 1);
	if (!check_double(tmp))
		return INT_MIN;
	if (pos != std::string::npos)
	{
		std::stringstream ss;
		ss << s.substr(pos + 1);
		ss >> d;
		return d;
	}
	return INT_MAX;
}