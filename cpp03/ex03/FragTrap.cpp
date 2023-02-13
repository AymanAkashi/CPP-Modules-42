/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:48:23 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/08 12:47:02 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " constractor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << name << " constractor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destractor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_name = src._name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return (*this);
}

std::string	FragTrap::get_name(void)
{
	return (this->_name);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << "Say High five Guys 🙌" << std::endl;
}