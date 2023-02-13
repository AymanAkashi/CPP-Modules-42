/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:58:27 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 13:09:04 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ Debug ] --> this is debug mode !!!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ Warning ] --> this is warning !!!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ Error ] --> this is error !!!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ Info ] --> this is info message !!!" << std::endl;
}

/* It's a function that takes a string as a parameter and call the function that has the same name as the string. */
void Harl::complain(std::string level)
{
	void (Harl::*func[4]) () = {
		&Harl::debug,
		&Harl::info,
		&Harl::error,
		&Harl::warning
	};

	std::string s[4] ={
		"DEBUG",
		"INFO",
		"ERROR",
		"WARNING",
	};
	Harl harl;
	bool found = false;
	for(int i = 0; i < 4; i++)
	{
		if (s[i] == level)
		{
			(harl.*func[i]) ();
			found = true;
		}
	}
	if (found ==  false)
		std::cout << "this command not found !!!" << std::endl;
}

Harl::Harl()
{

}

Harl::~Harl()
{

}