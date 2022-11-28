/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:39:07 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/27 18:59:13 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::~Zombie()
{
	std::cout << "Destractor call!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string &name) : name(name)
{
	std::cout << "Default constarcter call!" << std::endl;
}

Zombie *newZombie(std::string name)
{
	Zombie *new_Zombie;

	new_Zombie = new Zombie(name);
	return (new_Zombie);
}

void randomChump( std::string name )
{
	Zombie zombie(name);

	zombie.announce();
}
