/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:57:32 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/04 15:06:09 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
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
	this->_hitPoints = p._hitPoints;
	this->_energyPoints = p._energyPoints;
	this->_attackDamage = p._attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << this->_name << " Attack --> "  << target << std::endl;
	}
	else
		std::cout << "No hit point :(" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << this->_name << " take " << amount << " damage" << std::endl;
	}
	else
		std::cout << "No hit point :(" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints += amount;
		std::cout << this->_name << " be repaired " << amount << " hit points" << std::endl;
	}
	else
		std::cout << "No hit point :(" << std::endl;
}
