/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:35:53 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/18 16:01:26 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include<iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "cmath"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string const & _target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &rhs);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		void execute(Bureaucrat const & executor) const;
	private:
		std::string target;
};
#endif