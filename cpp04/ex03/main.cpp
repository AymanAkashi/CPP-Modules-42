/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 08:27:26 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/09 11:57:08 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"


int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}


// int main(void)
// {
// 	Character	*light;
// 	AMateria	*Dark;

// 	light = new Character("light");
// 	light->equip(new Ice());
// 	light->equip(new Cure());
// 	Dark = light->getMateria(0);
// 	std::cout << Dark->getType() << std::endl;
// 	Dark = light->getMateria(1);
// 	std::cout << Dark->getType() << std::endl;
// 	light->unequip(0);
// 	delete light;
// 	return (0);
// }
