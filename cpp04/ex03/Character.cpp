/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 08:50:25 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 11:54:25 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const & src)
{
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	return (*this);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

AMateria *Character::getMateria(int idx) const
{
	if (idx < 0 || idx > 3)
		return (NULL);
	return (this->_inventory[idx]);
}
