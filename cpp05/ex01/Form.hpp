/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:36:36 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/10 15:53:47 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string _name;
		bool _signed;
		int _sign_grade;
		int _execute_grade;
	public:
		Form(std::string name, int sign_grade, int execute_grade);
		Form(Form const & src);
		~Form();
		Form& operator=(Form const & rhs);
		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		class AlreadySignedException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		std::string getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		void beSigned(Bureaucrat const &bureaucrat);
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif