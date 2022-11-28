/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:00:53 by aaggoujj          #+#    #+#             */
/*   Updated: 2022/11/26 16:15:41 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>

static std::string RED = "\033[1;31m";
static std::string GREEN = "\033[1;32m";
static std::string YELLOW = "\033[1;33m";
static std::string BLUE = "\033[1;34m";
static std::string MAGENTA = "\033[1;35m";
static std::string CYAN = "\033[1;36m";
static std::string NC = "\033[0m";

enum LEVEL{
	Debug,
	Info,
	Warning,
	Error,
	Nothing
};

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void complain( std::string level);
		Harl();
		~Harl();
};

#endif