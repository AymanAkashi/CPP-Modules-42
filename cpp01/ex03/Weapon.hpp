/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 03:42:33 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/24 13:59:13 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		const std::string	&getType(void);
		void	setType(std::string type);
		Weapon(std::string type);
		~Weapon();
};

#endif