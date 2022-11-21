/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:33:19 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/21 19:01:15 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
