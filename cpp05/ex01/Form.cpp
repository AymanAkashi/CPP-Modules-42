/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:48:24 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/10 15:53:27 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade)
{
	if (signGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150)
		throw Form::GradeTooLowException();
	if (executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (executeGrade > 150)
		throw Form::GradeTooLowException();
	_name = name;
	_signed = false;
	_sign_grade = signGrade;
	_execute_grade = executeGrade;
}

Form::~Form()
{
	std::cout << "Destroying form " << _name << std::endl;
}

Form::Form(Form const & copy)
{
	if (copy._sign_grade < 1)
		throw Form::GradeTooHighException();
	else if (copy._sign_grade > 150)
		throw Form::GradeTooLowException();
	*this = copy;
}

Form &	Form::operator=(Form const & ref)
{
	_signed = ref._signed;
	return (*this);
}

std::string Form::getName() const
{
	return (_name);
}

int Form::getExecuteGrade() const
{
	return (_execute_grade);
}

int Form::getSignGrade() const
{
	return (_sign_grade);
}

bool Form::getSigned() const
{
	return (_signed);
}

void	Form::beSigned(Bureaucrat const & Bureaucrat)
{
	if (Bureaucrat.getGrade() > _sign_grade)
		throw Form::GradeTooLowException();
	if (_signed)
		throw Form::AlreadySignedException();
	_signed = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Form \"" << f.getName() << "\""<< " is ";
	if (f.getSigned())
		os << "signed";
	else
		os << "unsigned";
	os << " and requires a grade of " << f.getSignGrade() << " to be signed and a grade of " << f.getExecuteGrade() << " to be executed." << std::endl;
	return (os);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* Form::AlreadySignedException::what() const throw()
{
	return ("Form is already signed");
}
