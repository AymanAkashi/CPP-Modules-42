/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:53:16 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/26 16:20:18 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 #include <stdlib.h>


int main()
{
	Zombie *foo;

	foo = newZombie("Foo");
	foo->announce();
	randomChump("Boo");
	delete foo;
	return (0);
}