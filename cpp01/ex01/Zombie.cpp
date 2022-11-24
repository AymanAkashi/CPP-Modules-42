/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:39:07 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/22 21:39:23 by aaggoujj         ###   ########.fr       */
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

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string &name)
{
	this->name = name;
}

Zombie *newZombie(std::string name)
{
	Zombie *new_Zombie;

	new_Zombie = new Zombie;
	new_Zombie->setname(name);
	return (new_Zombie);
}

void randomChump( std::string name )
{
	Zombie zombie;

	zombie.setname(name);
	zombie.announce();
}
