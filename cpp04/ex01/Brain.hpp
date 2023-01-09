/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:01:47 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/12/24 19:27:50 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

#include <iostream>

class Brain
{
	private :
		std::string ideas[100];
	public :
		Brain();
		~Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &ref);
		
};

#endif