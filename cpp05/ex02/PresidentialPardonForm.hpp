/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:44:51 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/18 16:03:27 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include<iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &rhs);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		void	execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};

#endif