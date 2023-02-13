/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:28:45 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 10:53:30 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	this->brain  = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &rhs)
	{
		delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return (*this);
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*copy.brain);
}

void	Dog::makeSound() const
{
	std::cout << "Hoow Hoow Hoow" << std::endl;
}