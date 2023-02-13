/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:23:33 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/08 11:04:22 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "ScavTrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " constractor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << name << " constractor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->_name = src._name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destractor called" << std::endl;
}

void	ScavTrap::attack(std::string attacked)
{
if (this->hitPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks "  << attacked << " causing " << this->attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "No hit point :(" << std::endl;
}

void	ScavTrap::ShowState(void)
{
	std::cout << "Name      = "  << this->_name << std::endl << "Energy    = " <<this->energyPoints  << std::endl << "Hit point = "<< this->hitPoints << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
