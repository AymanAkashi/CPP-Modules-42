/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:54:53 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/20 17:59:51 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.hpp"

int main()
{
	std::srand(time(0));
    Base* b1 = generate();
    identify(b1);
    Base* b2 = generate();
    identify(b2);
    Base* b3 = generate();
    identify(b3);
    Base& c1 = *b1;
    identify(c1);
    Base& c2 = *b2;
    identify(c2);
    Base& c3 = *b3;
    identify(c3);
    delete b1;
    delete b2;
    delete b3;
}