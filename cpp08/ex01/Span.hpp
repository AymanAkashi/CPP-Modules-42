/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:05:19 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 12:13:21 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
#define Span_HPP

#include<iostream>
#include<vector>
#include<algorithm>

class Span
{
	public:
		Span(unsigned int N);
		~Span();
		Span(Span const &rhs);
		Span &operator=(Span const &rhs);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void MultiAdd(int n[]);
	private:
		std::vector <int> sizeumbers;
		unsigned int size;
};

#endif