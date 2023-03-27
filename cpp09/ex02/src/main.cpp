/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:10:52 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/03/21 18:26:11 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac <= 2)
	{
		std::cout << "Error Arg more 1 element \n";
		return (0);
	}
	try
	{
		PmergeMe(av);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}