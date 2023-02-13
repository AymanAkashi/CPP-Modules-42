/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:28:45 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 10:53:15 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}


Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs)
	{
		delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return (*this);
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*copy.brain);
}

void Cat::makeSound() const
{
	std::cout << "Meaw Meaw Meaw" << std::endl;
}