/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:58:27 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/27 19:21:53 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << GREEN << "[ Debug ]   --> this is debug mode !!!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << BLUE << "[ Warning ] --> this is warning !!!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "[ Error ]   --> this is error !!!" << NC << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW << "[ Info ]    --> this is info message !!!" << std::endl;
}

LEVEL gettype(std::string &s)
{
	std::string str[4] = {"DEBUG","INFO","WARNING","ERROR"};
	LEVEL l[4] = {Debug,Info,Warning,Error};
	int i;

	for (i = 0; i < 4; i++)
	{
		if (str[i] == s)
			return (l[i]);
	}
		return (Nothing);
}

void Harl::complain(std::string level)
{
	void (Harl::*func[4]) () = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string s[4] ={
		"DEBUG",
		"INFO",
		"ERROR",
		"WARNING",
	};
	Harl harl;
	LEVEL type = gettype(level);
	switch (type)
	{
		case Debug :
			(harl.*func[0])();
		case Info :
			(harl.*func[1]) ();
		case Warning :
			(harl.*func[2]) ();
		case Error:
			(harl.*func[3]) ();
			break;
		case Nothing :
			std::cout << MAGENTA << "[ this command not found !!! ]" << NC << std::endl;
	}
}
Harl::Harl()
{

}

Harl::~Harl()
{

}