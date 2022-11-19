/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:06:03 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/19 14:42:16 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int check_prompt(std::string &s)
{
	int i;
	for(i = 0; s[i] == ' ' || s[i] == '\t'; i++);
	if (s[i] == '\0')
	{
		std::cout << "Error: empty input" << std::endl;
		return 0;
	}
	return (1);
}

std::string get_input(std::string s)
{
	std::string input;
	while (!std::cin.eof())
	{
		std::cout << GREEN << s << ": " << NC;
		std::getline(std::cin, input);
		if (check_prompt(input))
			return (input);
	}
	exit(EXIT_SUCCESS);
}

void	get_index(Phonebook contacts[8], std::string &s)
{
	int id = stoi(s) - 1;
	if (contacts[id].first_name == "")
		std::cout << "ID is not found!" << std::endl;
	else
	{
		std::cout << CYAN << "first name   :  " << contacts[id].first_name << std::endl;
		std::cout << CYAN << "last name    :  " << contacts[id].last_name << std::endl;
		std::cout << CYAN << "nickname     :  " << contacts[id].nickname << std::endl;
		std::cout << CYAN << "phone_number :  " << contacts[id].phone_number << std::endl;
	}
}

void	put_string(std::string &s, bool last)
{
	if (s.length() < 10)
		std::cout << std::setw(10) << s;
	else
		for(int i = 0; i < 10; i++)
			std::cout << s[i];
	if (s.length() >= 10)
		std::cout << ".|";
	else
		std::cout << " |";
	if (last == true)
		std::cout << std::endl;
}

bool check_command(std::string &s)
{
	for(int i = 0; i < (int)s.length();i++)
	{
		if (!isdigit(s[i]))
		{
			std::cout << "Is not digit\n";
			return (false);
		}
	}
	if (stoi(s) > 8 || stoi(s) < 1)
	{
		std::cout << "ID is incorrect\n";
		return (false);
	}
	return (true);
}

void	print_contact(Phonebook contacts[8])
{
	int i = 0;
	if (contacts[0].first_name == "")
		std::cout << RED << "No contacts found\n" << GREEN << "Use Command ADD to set new contact\n" << NC;
	else
	{
		std::cout << "    Id    | First name| Last name | Nickname " << std::endl;
		std::cout << "**********************************************" << std::endl;
		while (i < 8 && contacts[i].first_name != "")
		{
			std::cout << "........." << i+1 << "|";
			put_string(contacts[i].first_name, false);
			put_string(contacts[i].last_name, false);
			put_string(contacts[i].nickname, true);
			i++;
		}
		std::cout << "**********************************************" << std::endl;
	}
}
