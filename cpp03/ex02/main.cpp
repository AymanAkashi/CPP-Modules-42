/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:52:21 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/07 20:07:18 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
        FragTrap                        Sasuki(MAGENTA + "Sasuki" + NC);
        FragTrap                        Naruto(YELLOW + "Naruto" + NC);
        FragTrap                        Madara(RED + "Madara" + NC);

        Naruto.attack(Madara.get_name());
	Madara.takeDamage(20);
	Madara.beRepaired(10);
        Sasuki.attack(Madara.get_name());
        Madara.takeDamage(20);
        Madara.beRepaired(10);
        Madara.attack(Sasuki.get_name());
	Sasuki.takeDamage(50);
        Naruto.highFivesGuys();
        Sasuki.ShowState();
        Naruto.ShowState();
        Madara.ShowState();

	return (0);
}