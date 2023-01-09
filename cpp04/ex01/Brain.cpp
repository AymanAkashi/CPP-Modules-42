/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:21:20 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/24 19:30:49 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "ideas";
	std::cout << "Brain Constractor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destracotor Called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain&	Brain::operator=(const Brain &ref)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
	return (*this);
}