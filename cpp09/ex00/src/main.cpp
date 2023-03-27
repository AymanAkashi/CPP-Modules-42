/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:10:30 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/03/23 12:23:37 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "Error: could not open file." << std::endl;
	else if (ac > 2)
		std::cout << "Error: too many arguments." << std::endl;
	else
		BitcoinExchange(av[1]);
	return 0;
}