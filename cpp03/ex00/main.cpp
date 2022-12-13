/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:52:21 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/11 13:04:50 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
        ClapTrap                        Sasuki(BLUE + "Sasuki" + NC);
        ClapTrap                        Naruto(YELLOW + "Naruto" + NC);

        Sasuki.attack(Naruto.get_name());
        Naruto.takeDamage(20);
        Naruto.beRepaired(50);
        Naruto.attack(Sasuki.get_name());
        Sasuki.takeDamage(10);
        Sasuki.beRepaired(10);
	return (0);
}