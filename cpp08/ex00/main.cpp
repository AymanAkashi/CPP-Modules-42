/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:55:59 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/23 16:59:37 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	int t;
	std::cout << "Enter a size of Vector : ";
	std::cin >> t;
	std::vector<int> v(t);
	for (int i = 0; i < t; i++)
	{
		std::cout << "Enter a value[" << i << "] : ";
		std::cin >> v[i];
	}
	std::cout << "Enter a value to find : ";
	std::cin >> t;
	try
	{
		std::cout << "Value found : " << easyfind(v, t) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}