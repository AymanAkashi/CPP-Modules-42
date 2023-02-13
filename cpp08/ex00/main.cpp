/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:55:59 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/12 15:18:59 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

int main()
{
	srand(time(NULL));
	int t = rand() % 50;
	std::vector<int> v(t);
	std::cout << "This size: " << t << std::endl;
	for (int i = 0; i < t; i++)
		v[i] = rand() % 100;
	std::cout << "This number generated randomly: ";
	for (int i = 0; i < t; i++)
		std::cout << v[i] << " ";
	std::cout << std::endl << "Enter a number to find: ";
	try
	{
		std::cin >> t;
		if (std::cin.fail() || std::cin.eof())
			throw std::runtime_error("Invalid input");
		std::cout << easyfind(v, t) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}