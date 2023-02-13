/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:53:57 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/11 14:07:31 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
    int choice = std::rand() % 3;
    switch (choice) {
        case 0: return new A;
        case 1: return new B;
        case 2: return new C;
    }
    return nullptr;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base& p)
{
    if (dynamic_cast<A*>(&p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(&p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(&p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}