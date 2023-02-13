/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:25:45 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 10:52:48 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *brain;
	public :
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog& rhs);
		virtual void makeSound() const;
};

#endif