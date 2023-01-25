/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:48:24 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/18 12:55:38 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int executeGrade)
{
	if (signGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150)
		throw AForm::GradeTooLowException();
	if (executeGrade < 1)
		throw AForm::GradeTooHighException();
	else if (executeGrade > 150)
		throw AForm::GradeTooLowException();
	_name = name;
	_signed = false;
	_sign_grade = signGrade;
	_execute_grade = executeGrade;
}

AForm::~AForm()
{
	std::cout << "Destroying AForm " << _name << std::endl;
}

AForm::AForm(AForm const & copy)
{
	if (copy._sign_grade < 1)
		throw AForm::GradeTooHighException();
	else if (copy._sign_grade > 150)
		throw AForm::GradeTooLowException();
	*this = copy;
}

AForm &	AForm::operator=(AForm const & ref)
{
	_signed = ref._signed;
	return (*this);
}

std::string AForm::getName() const
{
	return (_name);
}

int AForm::getExecuteGrade() const
{
	return (_execute_grade);
}

int AForm::getSignGrade() const
{
	return (_sign_grade);
}

bool AForm::getSigned() const
{
	return (_signed);
}

void	AForm::beSigned(Bureaucrat const & Bureaucrat)
{
	if (Bureaucrat.getGrade() > _sign_grade)
		throw AForm::GradeTooLowException();
	_signed = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << "AForm " << f.getName() << " is ";
	if (f.getSigned())
		os << "signed";
	else
		os << "unsigned";
	os << " and requires a grade of " << f.getSignGrade() << " to be signed and a grade of " << f.getExecuteGrade() << " to be executed." << std::endl;
	return (os);
}

void	AForm::checkGrade(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _execute_grade)
		throw AForm::GradeTooLowException();
	if (!_signed)
		throw AForm::FormNotSignedException();
}
