/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:33:19 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/20 20:27:32 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	std::string s;
	contact pb;

	std::cin.tie(nullptr);
	while (!std::cin.eof())
	{
		std::cout << YELLOW << "Enter a command: " << NC;
		std::getline(std::cin, s);
		if (std::cin.eof() || s == "EXIT")
			break;
		else if (s == "ADD")
			pb.add_contact();
		else if (s == "SEARCH")
			pb.contact::search_contact();
		else
			std::cout << RED << "Error: invalid command" << NC << std::endl;
	}
}
