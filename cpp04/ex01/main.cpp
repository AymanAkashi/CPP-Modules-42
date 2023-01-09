/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:31:19 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/24 19:40:13 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <stdlib.h>

int main()
{
	const Animal* A[4];
	for(int i = 0; i < 4; i++)
	{
		if (i % 2)
			A[i] = new Dog();
		else
			A[i] = new Cat();
	}
	for(int i = 0; i < 4; i++)
		A[i]->makeSound();
	for(int i = 0;i < 4; i++)
		delete A[i];
	system("leaks Animal");
	return 0;
}