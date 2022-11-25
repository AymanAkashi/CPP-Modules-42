/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:06:03 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/22 21:43:59 by aaggoujj         ###   ########.fr       */
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
		if (std::cin.eof())
			break;
		if (check_prompt(input))
			return (input);
	}
	exit(EXIT_SUCCESS);
}

void	Contact::get_index(Contact contacts[8], int id)
{
	id--;
	if (contacts[id].first_name == "")
		std::cout << "ID is not found!" << std::endl;
	else
	{
		std::cout << CYAN << "first name   :  " << contacts[id].first_name << std::endl;
		std::cout << CYAN << "last name    :  " << contacts[id].last_name << std::endl;
		std::cout << CYAN << "nickname     :  " << contacts[id].nickname << std::endl;
		std::cout << CYAN << "phone_number :  " << contacts[id].phone_number << std::endl;
		std::cout << CYAN << "darkest secret: " << contacts[id].darkest_secret << std::endl;
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

bool check_command(int s)
{
	if (s > 8 || s <= 0)
	{
		std::cout << "ID is incorrect\n";
		return (false);
	}
	return (true);
}

Contact::Contact(Contact &c)
{
	c.first_name = get_input("first name");
	c.last_name = get_input("last name");
	c.nickname = get_input("nickname");
	c.phone_number = get_input("phone number");
	c.darkest_secret = get_input("darkest secret");
}

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

void	Phonebook::add_contact(Phonebook &pb)
{

	pb.index %= 8;
	Contact(pb.contacts[pb.index]);
	pb.index++;
}

bool	Contact::print_contact(Contact contacts[8])
{
	int i = 0;
	if (contacts[0].first_name == "")
	{
		std::cout << RED << "No contacts found\n" << GREEN << "Use Command ADD to set new contact\n" << NC;
		return (false);
	}
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
	return (true);
}

void	Phonebook::search_contact(Phonebook &pb)
{
	if (this->contacts->print_contact(pb.contacts))
		while (!std::cin.eof())
		{
			std::string s;
			int	id;
			std::cout << BLUE << "Enter ID of contacts:" << NC;
			getline(std::cin, s);
			id = atoi(s.c_str());
			if (std::cin.eof())
				continue;
			if (id != '\n' && check_command(id))
			{
				pb.contacts->get_index(pb.contacts,id);
				break ;
			}
			std::cin.clear();
		}
}
