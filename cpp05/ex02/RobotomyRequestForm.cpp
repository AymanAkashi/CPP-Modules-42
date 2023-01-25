/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:36:56 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/18 16:01:32 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & _target) : AForm("RobotomyRequestForm", 72, 45), target(_target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) : AForm(rhs), target(rhs.target)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	checkGrade(executor);
	std::cout << "Drilling noises" << std::endl;
	if (rand() % 2 == 0)
		std::cout << "The robotomy of " << target << " was a success" << std::endl;
	else
		std::cout << "The robotomy of " << target << " failed" << std::endl;
}