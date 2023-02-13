/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:33:19 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 12:18:06 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/**
 * It reads a command from the user, and if it's valid, it calls the appropriate function
 */
int main()
{
	std::string s;
	Phonebook pb;

	std::cin.tie(nullptr);
	while (!std::cin.eof())
	{
		std::cout << YELLOW << "Enter a command: " << NC;
		std::getline(std::cin, s);
		if (std::cin.eof() || s == "EXIT")
			break;
		else if (s == "ADD")
			pb.add_contact(pb);
		else if (s == "SEARCH")
			pb.search_contact(pb);
		else
		{
			std::cout << RED << "??? invalid command" << NC << std::endl;
			std::cout << GREEN << "!!! valid commands are: ADD, SEARCH, EXIT" << NC << std::endl;
		}
	}
}
