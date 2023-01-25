/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:55:45 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/18 13:01:18 by aaggoujj         ###   ########.fr       */
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
        Form f("Form 1", 2, 100);
        Form f2("Form 2", 1, 100);
        b1.incrementGrade();
        b1.signForm(f);
        b2.signForm(f2);
           std::cout << f << std::endl;
        f2.beSigned(b2);
        std::cout << f2 << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}