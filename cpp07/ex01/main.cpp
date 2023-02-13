/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:58:54 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 11:51:59 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
// #include <vector>

void square(int const &n) {
	std::cout << n * n << std::endl;
}


void reverse(std::string const &str) {
	std::string tmp = str;
	for (size_t i = 0; i < str.length(); i++) {
		std::cout << tmp[str.length() - i - 1];
	}
	std::cout << std::endl;
}



int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	std::cout << "Before:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;
	std::cout << "After:" << std::endl;
	try
		{
			iter(arr, 5, square);
		}
	catch (std::invalid_argument &e)
		{
			std::cerr << e.what() << std::endl;
			return 1;
		}
//******************************/String/***************************************
	std::cout << std::endl;
	std::string str[] = {"Hello", "World", "!"};
	std::cout << "Before:" << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << str[i] << std::endl;
	std::cout << "After:" << std::endl;
	try
		{
			iter(str, 3, reverse);
		}
	catch (std::invalid_argument &e)
		{
			std::cerr << e.what() << std::endl;
			return 1;
		}

	return 0;
}