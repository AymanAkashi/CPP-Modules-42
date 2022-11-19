/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:06:39 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/19 14:43:38 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef PHONEBOOK_H
 #define PHONEBOOK_H

#include <iostream>
#include <iomanip>

static std::string RED = "\033[1;31m";
static std::string GREEN = "\033[1;32m";
static std::string YELLOW = "\033[1;33m";
static std::string BLUE = "\033[1;34m";
static std::string MAGENTA = "\033[1;35m";
static std::string CYAN = "\033[1;36m";
static std::string NC = "\033[0m";



class Phonebook
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string phone_number;
};

std::string get_input(std::string s);
void	get_index(Phonebook contacts[8], std::string &s);
bool	 check_command(std::string &s);
void	print_contact(Phonebook contacts[8]);
void	put_string(std::string &s, bool last);

class contact
{
	private:
		Phonebook contacts[8];
		int index;
	public:
		void add_contact()
		{
			index %= 8;
			contacts[index].first_name = get_input("First name");
			contacts[index].last_name = get_input("Last name");
			contacts[index].nickname = get_input("Nickname");
			contacts[index].darkest_secret = get_input("Darkest secret");
			contacts[index].phone_number = get_input("Phone number");
			index++;
		}
		void search_contact()
		{
			print_contact(contacts);
			while (!std::cin.eof())
			{
				std::string id;
				std::cout << BLUE << "Enter ID of contacts:" << NC;
				std::getline(std::cin, id);
				if (check_command(id))
				{
					get_index(contacts, id);
					break ;
				}
			}
		}
};


 #endif