/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:39:06 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 12:28:27 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Default constarcter call!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destractor call!" << std::endl;
}

/**
 * This function prints the name of the zombie followed by a message.
 */
void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/**
 * This function takes a string reference as a parameter and sets the name of the zombie to the string
 * 
 * @param name The name of the zombie.
 */
void	Zombie::setname(std::string &name)
{
	this->name = name;
}

/**
 * It creates a new array of Zombie objects, sets the name of each Zombie object to the string passed as a parameter, and returns a pointer to the first element of the array
 * 
 * @param N the number of zombies to create
 * @param name the name of the zombie horde
 * 
 * @return A pointer to a Zombie array.
 */
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