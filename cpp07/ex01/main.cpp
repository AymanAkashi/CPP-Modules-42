/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:58:54 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/21 10:03:16 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void square(int &n) {
	n *= n;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	std::cout << "Before:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;
	try
	{
		iter(arr, 5, square);
	} catch (std::invalid_argument &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	std::cout << "After:" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << std::endl;
	}
	return 0;
}