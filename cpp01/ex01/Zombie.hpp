/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:34:32 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/27 18:07:24 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>


class Zombie
{
	private:
		std::string name;
	public:
		void	announce(void);
		void	setname(std::string &name);
		Zombie();
		~Zombie();
};
Zombie* zombieHorde(int N, std::string name);

#endif