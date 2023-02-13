/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:54:15 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/07 20:33:57 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

static std::string RED = "\033[1;31m";
static std::string GREEN = "\033[1;32m";
static std::string YELLOW = "\033[1;33m";
static std::string BLUE = "\033[1;34m";
static std::string MAGENTA = "\033[1;35m";
static std::string CYAN = "\033[1;36m";
static std::string NC = "\033[0m";

class ClapTrap
{
	private:
		std::string	_name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();
		ClapTrap const &	operator=(ClapTrap const & p);
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string get_name();

};


#endif