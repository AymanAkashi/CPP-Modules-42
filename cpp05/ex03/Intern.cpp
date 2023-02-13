/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:22:59 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/10 15:08:34 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	return ;
}

Intern::Intern( Intern const & src ) {
	*this = src;
}

Intern::~Intern( void ) {
	return ;
}

Intern &	Intern::operator=( Intern const & rhs ) {
	(void)rhs;
	return *this;
}

AForm *	Intern::makeForm( std::string formName, std::string target )
{
	std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm *form = NULL;
	int type = std::find(formNames, formNames + 3, formName) - formNames;
	switch (type)
	{
		case 0:
			form = new RobotomyRequestForm(target);
			break;
		case 1:
			form = new PresidentialPardonForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
		default:
			std::cerr << "Form not found" << std::endl;
			break;
	}
	return (form);
}