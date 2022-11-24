/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:39:06 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/22 21:51:40 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N > 0)
	{
		Zombie *new_horde_zombie;
		new_horde_zombie = new Zombie[N];
		for(int i = 0; i < N; i++)
			new_horde_zombie[i].setname(name);
		return (new_horde_zombie);
	}
	return (nullptr);
}