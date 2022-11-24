/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:50:58 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/24 15:13:26 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon	&weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	 std:: cout << this->name << "is attack !" << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon= NULL;
}