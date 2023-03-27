/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:06:55 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/03/21 18:28:04 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>
# include <deque>
# include <time.h>
# include <sys/time.h>
# include <algorithm>
# include <iomanip>

void	PmergeMe(char **av);


class Timer
{
	public:
		Timer();
		Timer(Timer const &src);
		~Timer();

		Timer	&operator=(Timer const &rhs);

		void	start();
		void	stop();
		double	getElapsedTime() const;
		struct timeval	_start;
		struct timeval	_end;
		bool			_running;
		bool			onlyOne;
		bool			check(std::string s);
};

