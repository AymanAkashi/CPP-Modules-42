/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:36:36 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/18 12:53:50 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string _name;
		bool _signed;
		int _sign_grade;
		int _execute_grade;
	public:
		AForm(std::string name, int sign_grade, int execute_grade);
		AForm(AForm const & src);
		~AForm();
		AForm& operator=(AForm const & rhs);
		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
        class GradeTooLowException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		class FormAlreadySignedException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		std::string 	getName() const;
		bool			getSigned() const;
		int 			getSignGrade() const;
		int				getExecuteGrade() const;
		void			beSigned(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		void			checkGrade(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif