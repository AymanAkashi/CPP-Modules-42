/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:34:32 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 12:27:51 by aaggoujj         ###   ########.fr       */
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
		Zombie(std::string &name);
		~Zombie();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif