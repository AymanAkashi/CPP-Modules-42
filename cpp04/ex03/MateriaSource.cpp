/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:34:59 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 11:02:04 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
	for (int i = 0; i < 4; i++)
		if (rhs._materia[i])
			this->_materia[i] = rhs._materia[i]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			return ;
		}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	return (NULL);
}