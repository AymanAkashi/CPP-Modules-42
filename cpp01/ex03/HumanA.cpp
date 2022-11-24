/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:42:53 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/24 15:11:10 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : Name(name),gun(weapon)
{
	//
}

void	HumanA::attack(void)
{
	 std:: cout << this->Name << "is attack !" << this->gun.getType() << std::endl;
}