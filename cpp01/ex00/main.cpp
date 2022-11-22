/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:53:16 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/22 11:04:39 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 #include <stdlib.h>


int main()
{
	Zombie *stack;
	Zombie heap;

	stack = newZombie("Foo");
	stack->announce();
	randomChump("Boo");
	delete stack;
}