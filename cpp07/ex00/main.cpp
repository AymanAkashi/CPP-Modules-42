/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:45:16 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/21 09:49:23 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "MIN( a, b ) = " << MIN( a, b ) << std::endl;
	std::cout << "MAX( a, b ) = " << MAX( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "MIN( c, d ) = " << MIN( c, d ) << std::endl;
	std::cout << "MAX( c, d ) = " << MAX( c, d ) << std::endl;
	return 0;
}