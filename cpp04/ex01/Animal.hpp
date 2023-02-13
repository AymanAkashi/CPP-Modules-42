/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:22:59 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/07 12:10:30 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);
		virtual void makeSound() const;
		std::string getType() const;
		void setType(std::string type);
};

#endif