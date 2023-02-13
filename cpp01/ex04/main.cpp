/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:16:44 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 13:08:25 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

/**
 * It opens a file, reads it line by line, and writes the lines to a new file, replacing all occurrences of a string with another string
 * 
 * @param filename the name of the file to be replaced
 * @param my_file the file to be read
 * @param s1 the string to be replaced
 * @param s2 the string to replace s1 with
 */
void	write_file(std::string filename, std::fstream &my_file, std::string s1, std::string s2)
{
	std::string line;
	std::ofstream file(filename + ".replace");

	if (!file)
	{
		std::cout << "file does't create !!!" << std::endl;
		exit(EXIT_FAILURE);
	}
	while (getline(my_file, line))
	{
		std::string s;
		for(size_t i = 0; i < line.length();i++)
		{
			size_t j = 0;
			while (line[i + j] == s1[j] && j < s1.length())
				j++;
			if (j == s1.length())
				s += s2;
			else
				s += line[i];
		}
		file << s << "\n";
	}
}

int main(int ac, char **av)
{
	std::fstream my_file;

	if (ac == 4)
	{
		my_file.open(av[1]);
		if (!my_file)
			return (std::cout << "file not open !!" << std::endl , 0);
		write_file(av[1], my_file, av[2], av[3]);
	}
	return (0);
}