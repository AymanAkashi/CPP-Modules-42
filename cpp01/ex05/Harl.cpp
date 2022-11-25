/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:58:27 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/24 21:54:35 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "this is debug mode !!!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "this is warning !!!" << std::endl;
} 

void	Harl::error(void)
{
	std::cout << "this is error !!!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "this is info message !!!" << std::endl;
}

void Harl::complain(std::string level)
{
	(void)level;
	void	(Harl::* ptrf) (void)  = &Harl::debug;
	
	Harl obj;

	(obj.*ptrf)();
}
Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}