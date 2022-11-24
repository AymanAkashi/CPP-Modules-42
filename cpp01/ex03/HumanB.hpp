/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 05:18:52 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/24 14:35:43 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon	&weapon);
		void	attack(void);
		
};

#endif