/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:42:53 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/27 18:13:42 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &Weapon) : Name(name),weapon(Weapon)
{
	//
}

void	HumanA::attack(void)
{
	 std:: cout << this->Name << "is attack !" << this->weapon.getType() << std::endl;
}