/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:55:45 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/18 13:01:29 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat b("Akashi", 3);
        std::cout << b << std::endl;

        b.incrementGrade();
        std::cout << b << std::endl;

        b.decrementGrade();
        b.decrementGrade();
        b.decrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}