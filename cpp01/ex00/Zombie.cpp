/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:39:07 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 12:27:33 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


/**
 * The destructor is called when the object is destroyed
 */
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
 * Zombie::Zombie(std::string &name) : name(name)
 * 
 * This is a constructor for the Zombie class. It takes a reference to a string as a parameter and assigns it to the name member variable
 * 
 * @param name The name of the zombie.
 */
Zombie::Zombie(std::string &name) : name(name)
{
	std::cout << "Default constarcter call!" << std::endl;
}

/**
 * It creates a new Zombie, and returns a pointer to it
 * 
 * @param name The name of the Zombie
 * 
 * @return A pointer to a Zombie object.
 */
Zombie *newZombie(std::string name)
{
	Zombie *new_Zombie;

	new_Zombie = new Zombie(name);
	return (new_Zombie);
}

/**
 * Create a Zombie object, initialize it with the name parameter, and then call the announce() method on it.
 * 
 * @param name The name of the zombie.
 */
void randomChump( std::string name )
{
	Zombie zombie(name);

	zombie.announce();
}
