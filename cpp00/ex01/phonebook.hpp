/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:06:39 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/20 20:33:53 by aaggoujj         ###   ########.fr       */
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
void	get_index(Phonebook contacts[8], int s);
bool 	check_command(int s);
void	print_contact(Phonebook contacts[8]);
void	put_string(std::string &s, bool last);

class contact
{
	private:
		Phonebook contacts[8];
		int index;
	public:
		void add_contact();
		void search_contact();
};


 #endif