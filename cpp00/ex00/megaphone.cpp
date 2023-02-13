/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:07:35 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 12:17:59 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/**
 * It takes the arguments passed to it, converts them to uppercase, and prints them out
 * 
 * @param ac the number of arguments passed to the program
 * @param av array of strings
 */
int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int i = 1;
		while (av[i])
		{
			std::string s = av[i];
			for(int j = 0; s[j]; j++)
				s[j] = toupper(s[j]);
			std::cout << s;
			i++;
		}
	}
	std::cout << "\n";
}