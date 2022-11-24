/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:16:44 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/24 18:23:01 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	write_file(std::string filename, std::fstream &my_file, std::string s1, std::string s2)
{
	std::string line;
	std::ofstream file(filename + ".replace");

	if (!file)
	{
		std::cout << "file does't create !!!" << std::endl;
		exit(EXIT_FAILURE);
	}
	getline(my_file, line);
	while (line != "")
	{
		std::string s;
		for(size_t i = 0; i < line.length();i++)
		{
			size_t j = 0;
			while (s1[j] && s1[j] == line[i + j])
				j++;
			if (j == s1.length())
				for (size_t l = 0; l < s2.length(); l++)
					line[i++] = s2[l];
		}
		file << line << "\n";
		getline(my_file, line);
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