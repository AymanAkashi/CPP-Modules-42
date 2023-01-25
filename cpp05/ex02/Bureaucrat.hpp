/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:18:54 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/18 15:27:32 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & copy);
		~Bureaucrat();
		Bureaucrat &	operator=(Bureaucrat const & ref);
		std::string const &	getName() const;
		int					getGrade() const;
		class 					GradeTooHighException : public std::exception {};
		class 					GradeTooLowException : public std::exception {};
		void				incrementGrade();
		void				decrementGrade();
		void				signAForm(AForm& AForm);
		void				executeAForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);


#endif