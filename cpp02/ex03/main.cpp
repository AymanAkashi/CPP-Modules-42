/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:13:48 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/05 11:07:14 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
		Point a(2, 3 );
		Point b(5, 5 );
		Point c(0, 1 );
		Point p(0.25f,1.24f);
		std::cout  << "******************"<< a.get_x() << std::endl;
		std::cout  << "******************"<< a.get_y() << std::endl;
		if (bsp( a, b, c, p ) == true)
			std::cout << "true" << std::endl;
		else
			std::cout << "false" << std::endl;
		return 0;
}
