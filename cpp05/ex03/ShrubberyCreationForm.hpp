/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:13:12 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 18:30:35 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "AForm.hpp"
#include<iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		void execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm *create(std::string &target);
	private:
		std::string target;
};
#endif