/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:57:32 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/08 11:01:33 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap "<< name << " Created !!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &p)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_name = p._name;
	this->hitPoints = p.hitPoints;
	this->energyPoints = p.energyPoints;
	this->attackDamage = p.attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if(this->hitPoints <= 0)
		std::cout << "No hit point :(" << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "No energy point :(" << std::endl;
	else
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks "  << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints - amount <= 0)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << this->_name << " take " << amount << " damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->hitPoints <= 0)
		std::cout << "No hit point :(" << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "No energy point :(" << std::endl;
	else
	{
		this->hitPoints += amount;
		std::cout << this->_name << " be repaired " << amount << " hit points" << std::endl;
	}
}


std::string ClapTrap::get_name(void)
{
	return (this->_name);
}