/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoindExchange.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:09:50 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/03/27 13:09:40 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

std::string time_get(int year, int month, int day, t_date &date)
{
	std::stringstream ss;
	std::string a;
	std::string	b;
	std::string c;
	if (year > 0 && month > 0 && month < 13 && day > 0 && day < 32)
	{
		ss << year;
		ss >> a;
		date.year = a;
		a+="-";
		ss.clear();
		ss << month;
		ss >> b;
		date.month = b;
		b+="-";
		ss.clear();
		ss<< day;
		ss >> c;
		date.day = c;
		return a+b+c;
	}
	else
		return "bad input";
}

std::string last_day(t_date &date)
{
	std::stringstream ss;
	std::string d = "";
	if (date.year == "" || date.month == "" || date.day == "")
		return "bad input";
	int year = std::stoi(date.year);
	int month = std::stoi(date.month);
	int day = std::stoi(date.day);
	if (year == 1 and month == 1 and day == 1)
		return "Not found";
	else if (month == 1 and day == 1)
		d = time_get(--year, 12, 31, date);
	else if (day == 1 and month == 3 and year % 4)
		d = time_get(year, 02, 28, date);
	else if (day == 1 and month == 3 and !(year % 4))
		d = time_get(year, 02, 29, date);
	else if (month % 2 == 0 and day == 1)
		d = time_get(year, --month, 31, date);
	else if ((month % 2 != 0 or month != 8) and day == 1)
		d = time_get(year, --month, 30, date);
	else
		d = time_get(year, month, --day, date);
	return d;
}

t_date	get_date(std::string &s)
{
	t_date date;
	std::string str = s;
	date.year = "";
	date.month = "";
	date.day = "";



	date.year = str.substr(0, str.find('-'));
	if (str.find('-') == std::string::npos)
		return (t_date){.year = "", .month = "", .day = "", .check = false, .error = "bad input"};
	str = str.substr(str.find('-') + 1);
	date.month = str.substr(0, str.find('-'));
	if (str.find('-') == std::string::npos)
		return (t_date){.day = "", .month = "", .year = "", .check = false, .error = "bad input"};
	str = str.substr(str.find('-') + 1);
	date.day = str.substr(0, str.find('-'));
	return date;
}

//check date is valid
bool valid_date( std::string &s)
{
	t_date date = get_date(s);
	if (date.year == "" || date.month == "" || date.day == "")
		return false;
	int year = std::stoi(date.year);
	int month = std::stoi(date.month);
	int day = std::stoi(date.day);
	if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if (month == 2 && day > 28 && year % 4)
		return false;
	if (month == 2 && day > 29 && not (year % 4))
		return false;
	if (((month % 2 == 0 && month < 8) || (month % 2 != 0 && month > 8)) && day > 30 && month != 8)
		return false;
	if (month % 2 != 0 && day > 31 && month != 9)
		return false;
	return true;
}

std::string remove_space(std::string s)
{
	std::string str = s;
	while (str.find(' ') != std::string::npos)
		str.erase(str.find(' '), 1);
	return str;
}

void get_real_date(std::string &s, std::map<std::string, double> &m, std::string &price)
{
	std::string str = s;
	std::map<std::string, double>::iterator it =  m.lower_bound(s);
	if (price == "bad input")
	{
		std::cout << "Error: bad input => " << s << std::endl;
		return;
	}
	double c = std::stod(price);
	if (it == m.end())
	{
		std::cout << "Error: date not found." << std::endl;
		return;
	}
	if (it->first != s && it != m.begin())
		--it;
	if (!valid_date(s))
		std::cout << "Error: bad input => " << s << std::endl;
	else if (c > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else if (c == INT_MIN)
		std::cout << "Error: invalid number." << std::endl;
	else if (c < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (c == 0)
		std::cout << "Error: not a number." << std::endl;
	else
		std::cout << remove_space(str.substr(0, str.find('|'))) << " => " << c << " = " << c * it->second << std::endl;
}


bool check_line(std::string &s, char c)
{
	if (s.find(c) == 0)
		return true;
	if (s.find(c) == s.size() - 1)
		return true;
	for(size_t i = 0; i < s.size(); i++)
	{
		if (not isdigit(s[i]) and s[i] != c and s[i] != '.' and s[i] != '-' and !isspace(s[i]))
			return true;
	}
	return false;
}

void read_data(std::ifstream &file, std::map<std::string, double> &m)
{
	file.open("data.csv");
	if (!file.is_open())
	{
		std::cout << "Error: file not open." << std::endl;
		exit(1);
	}
	std::string line;
	std::string date;
	std::string price;
	while (std::getline(file, line))
	{
		if (check_line(line, ','))
			continue;
		date = line.substr(0, line.find(','));
		price = line.substr(line.find(',') + 1, line.size());
		m[date] = std::stod(price);
	}
	file.close();
}

bool check_price(std::string &s)
{
	int dot = 0;
	for(size_t i = 0; i < s.size(); i++)
	{
		if (not isdigit(s[i]) and s[i] != '.' and s[i] != '-' and !isspace(s[i]))
			return true;
		if (s[i] == '.')
			dot++;
	}
	if (dot > 1)
		return true;
	return false;
}

void read_file(std::ifstream &file, std::string s, std::map<std::string, double> &m)
{
	file.open(s);
	if (!file.is_open())
	{
		std::cout << "Error: file not open." << std::endl;
		exit(1);
	}
	std::string line;
	std::string date;
	std::string price;
	t_date d;
	size_t		pos = 0;
	while (std::getline(file, line))
	{
		if (check_line(line, '|'))
			continue;
		pos = line.find('|');
		if (pos == std::string::npos)
			date = line;
		else
			date = line.substr(0, pos);
		price = line.substr(line.find('|') + 1, line.size());
		if (check_price(price))
			price = "bad input";
		get_real_date(date, m, price);
	}
	file.close();
}

void	BitcoinExchange(std::string s)
{
	std::ifstream file;
	std::string		line;
	std::map<std::string , double> m;
	read_data(file, m);
	read_file(file, s, m);
}