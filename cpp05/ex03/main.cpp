/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:55:45 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 19:16:42 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
    Bureaucrat				A("Aymane", 44);

	try
	{
		Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        A.signAForm(*rrf);
        A.executeAForm(*rrf);
        rrf->execute(A);
        A.signAForm(*rrf);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error : "<< e.what() << std::endl;
    }
    return 0;
}

// int main()
// {
//     try
//     {
//         Bureaucrat b1("Aymane", 20);
//         RobotomyRequestForm f1("Akashi");
//         b1.signAForm(f1);
//         b1.executeAForm(f1);
//     }
//     catch (std::exception &e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     return 0;
// }

// int main()
// {
//     try
//     {
//         Bureaucrat b1("Aymane", 1);
//         PresidentialPardonForm f1("Akashi");
//         b1.signAForm(f1);
//         b1.executeAForm(f1);
//     }
//     catch (std::exception &e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     return 0;
// }

