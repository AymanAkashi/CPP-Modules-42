/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 03:57:43 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/27 18:12:54 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	Name;
		Weapon		&weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);
};

#endif