/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:22:05 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/10 14:35:34 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
		return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
		return "Grade too low";
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) : _name(copy._name)
{
	if (copy._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (copy._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = copy._grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & ref)
{
	if (ref._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (ref._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = ref._grade;
	return (*this);
}

std::string const &	Bureaucrat::getName() const
{
	return (_name);
}

int					Bureaucrat::getGrade() const
{
	return (_grade);
}

void				Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_grade--;
	}
	catch (std::exception & e)
	{
		std::cerr << "TooHigh " << e.what() << std::endl;
	}
}

void				Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade++;
	}
	catch (std::exception& e)
	{
		std::cerr << "TooLow " << e.what() << std::endl;
	}
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
