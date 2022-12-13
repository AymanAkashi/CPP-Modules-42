/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:52:21 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/13 17:53:05 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
        DiamondTrap                        Sasuki(MAGENTA + "Sasuki" + NC);
        DiamondTrap                        Naruto(YELLOW + "Naruto" + NC);
        DiamondTrap                        Momoshiki(RED + "Momoshiki" + NC);

        Naruto.attack(Momoshiki.get_name());
	Momoshiki.takeDamage(20);
	Momoshiki.beRepaired(10);
        Sasuki.attack(Momoshiki.get_name());
        Momoshiki.takeDamage(20);
        Momoshiki.beRepaired(10);
        Momoshiki.attack(Sasuki.get_name());
	Sasuki.takeDamage(50);
        Sasuki.whoAmI();
        Naruto.whoAmI();
        Momoshiki.whoAmI();

	return (0);
}