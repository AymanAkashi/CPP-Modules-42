/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:52:21 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/11 15:12:45 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
        FragTrap                        Sasuki(MAGENTA + "Sasuki" + NC);
        FragTrap                        Naruto(YELLOW + "Naruto" + NC);
        FragTrap                        Momoshiki(RED + "Momoshiki" + NC);

        Naruto.attack(Momoshiki.get_name());
	Momoshiki.takeDamage(20);
	Momoshiki.beRepaired(10);
        Sasuki.attack(Momoshiki.get_name());
        Momoshiki.takeDamage(20);
        Momoshiki.beRepaired(10);
        Momoshiki.attack(Sasuki.get_name());
	Sasuki.takeDamage(50);
        Naruto.highFivesGuys();
        Sasuki.ShowState();
        Naruto.ShowState();
        Momoshiki.ShowState();

	return (0);
}