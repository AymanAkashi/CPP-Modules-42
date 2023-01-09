/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:25:00 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/24 17:25:43 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & copy)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

std::string	AAnimal::getType() const
{
	return this->type;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal Sound ...!" << std::endl;
}