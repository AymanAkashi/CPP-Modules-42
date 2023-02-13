/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:52:21 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/08 10:53:36 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
        ScavTrap                        Madara(RED + "Madara" + NC);
        ScavTrap                        Sasuki(BLUE + "Sasuki" + NC);
        ScavTrap                        Naruto(YELLOW + "Naruto" + NC);

        Madara.attack(Sasuki.get_name());
        Naruto.attack(Madara.get_name());
	Sasuki.takeDamage(20);
	Sasuki.beRepaired(10);
	Sasuki.attack(Madara.get_name());
	Madara.takeDamage(20);
        Madara.beRepaired(10);
        Madara.attack(Sasuki.get_name());
        Sasuki.takeDamage(20);
        Naruto.guardGate();
        Madara.ShowState();
        Sasuki.ShowState();
        Naruto.ShowState();

	return (0);
}