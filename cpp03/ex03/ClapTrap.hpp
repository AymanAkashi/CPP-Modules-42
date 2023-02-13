/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:54:15 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/08 12:41:05 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap();
		ClapTrap &	operator=(ClapTrap const & p);
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		ShowState(void);
		std::string get_name();

};


#endif