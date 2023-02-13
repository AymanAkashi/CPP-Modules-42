/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:55:45 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/10 15:54:17 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try
    {
        Bureaucrat b1("Aymane", 3);
        Bureaucrat b2("Moussa", 1);
        Form f("Form 1", 1, 100);
        Form f2("Form 2", 2, 100);
        b1.incrementGrade();
        b1.signForm(f);
        b2.signForm(f2);
           std::cout << f;
        std::cout << f2;
    }
    catch (std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}