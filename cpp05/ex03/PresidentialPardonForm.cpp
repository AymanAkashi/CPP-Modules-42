/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:46:58 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 18:31:41 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) : AForm(rhs), target(rhs.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	AForm::operator=(rhs);
	this->target = rhs.target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	this->checkGrade(bureaucrat);
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm *PresidentialPardonForm::create(std::string &target) 
{
	return (new PresidentialPardonForm(target));
}