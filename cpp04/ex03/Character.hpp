/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 08:47:56 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/09 10:31:06 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private :
		std::string		_name;
		AMateria		*_inventory[4];
	public :
		Character(std::string const & name);
		Character(Character const & src);
		Character & operator=(Character const & rhs);
		virtual		~Character();
		virtual		std::string const & getName() const;
		virtual		void equip(AMateria* m);
		virtual		void unequip(int idx);
		virtual		void use(int idx, ICharacter& target);
		virtual AMateria	*getMateria(int idx) const;
};

#endif