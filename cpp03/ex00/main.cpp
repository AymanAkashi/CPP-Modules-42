/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:52:21 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/07 20:49:06 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
        ClapTrap                        Moussa(BLUE + "Moussa" + NC);
        ClapTrap                        Omar(YELLOW + "Omar" + NC);

        Moussa.attack(Omar.get_name());
        Omar.takeDamage(0);
        Omar.beRepaired(50);
        Omar.attack(Moussa.get_name());
        Moussa.takeDamage(0);
        Moussa.beRepaired(10);
	return (0);
}