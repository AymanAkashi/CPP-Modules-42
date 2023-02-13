/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:40:18 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 12:13:55 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	int n[5] = {5, 3, 17, 9, 11};
	Span sp2 = Span(5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp2.MultiAdd(n);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout <<"Span Multi add = " << sp2.shortestSpan() << std::endl;
	std::cout <<"Span Multi add = " << sp2.longestSpan() << std::endl;
	std::cout <<"Span add = " << sp.shortestSpan() << std::endl;
	std::cout <<"Span add = " << sp.longestSpan() << std::endl;
	return 0;
}

// int main()
// {
// 	srand(time(0));
// 	Span sp = Span(10000);
// 	try
// 	{
// 		for (int i = 0; i < 10000; i++)
// 			sp.addNumber(rand() % 10000);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// }