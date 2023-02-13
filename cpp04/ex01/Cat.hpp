/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:25:45 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 10:52:51 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *brain;
	public :
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat& rhs);
		virtual void makeSound() const;
};

#endif