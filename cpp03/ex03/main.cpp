/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:52:21 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/08 12:49:15 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
        DiamondTrap                        Sasuki(MAGENTA + "Sasuki" + NC);
        DiamondTrap                        Naruto(YELLOW + "Naruto" + NC);
        DiamondTrap                        Madara(RED + "Madara" + NC);

        Naruto.attack(Madara.get_name());
	Madara.takeDamage(20);
	Madara.beRepaired(10);
        Sasuki.attack(Madara.get_name());
        Madara.takeDamage(20);
        Madara.beRepaired(10);
        Madara.attack(Sasuki.get_name());
	Sasuki.takeDamage(50);
        Sasuki.whoAmI();
        Naruto.whoAmI();
        Madara.whoAmI();

	return (0);
}