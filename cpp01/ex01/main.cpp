/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:53:16 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/27 19:04:42 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 #include <stdlib.h>


int main()
{
	Zombie *zombie;

	zombie = zombieHorde(10, "Foo");
	for(int i = 0; i < 10; i++)
		zombie[i].announce();
	delete [] zombie;
	return (0);
}