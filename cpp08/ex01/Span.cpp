/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:03:57 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/24 12:43:28 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : size(N)
{
}

Span::~Span()
{
}

Span::Span(Span const &rhs)
{
	*this = rhs;
}

Span &Span::operator=(Span const &rhs)
{
	this->sizeumbers = rhs.sizeumbers;
	this->size = rhs.size;
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->sizeumbers.size() < this->size)
		this->sizeumbers.push_back(n);
	else
		throw std::exception();
}

int Span::shortestSpan()
{
	if (this->sizeumbers.size() < 2)
		throw std::exception();
	std::vector<int> tmp = this->sizeumbers;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < min)
			min = tmp[i + 1] - tmp[i];
	}
	return (min);
}

int Span::longestSpan()
{
	if (this->sizeumbers.size() < 2)
		throw std::exception();
	std::vector<int> tmp = this->sizeumbers;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}