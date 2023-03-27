/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:51:54 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/03/26 12:20:10 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

Timer::Timer()
{
	this->_running = false;
	this->onlyOne = true;
}

Timer::Timer(Timer const &src)
{
	*this = src;
}

Timer::~Timer()
{
}

Timer	&Timer::operator=(Timer const &rhs)
{
	this->_start = rhs._start;
	this->_end = rhs._end;
	this->_running = rhs._running;
	return *this;
}

void	Timer::start()
{
	this->_running = true;
	gettimeofday(&this->_start, NULL);
}

void	Timer::stop()
{
	this->_running = false;
	gettimeofday(&this->_end, NULL);
}

double	Timer::getElapsedTime() const
{
	if (this->_running)
	{
		struct timeval end;
		double start_us, end_us;
		gettimeofday(&end, NULL);
		start_us = this->_start.tv_sec + this->_start.tv_usec / 1e6;
		// end_us = end.tv_sec  + end.tv_usec / 1e6;
		return ((end.tv_sec - this->_start.tv_sec)) + ((end.tv_usec - this->_start.tv_usec) / 1e6);
		return (end_us - start_us);
	}
	else
	{
		double start_us, end_us;
		start_us = this->_start.tv_sec + this->_start.tv_usec / 1e6;
		end_us = this->_end.tv_sec + this->_end.tv_usec / 1e6;
		// return (end_us - start_us);
		return ((this->_end.tv_sec - this->_start.tv_sec)) + ((this->_end.tv_usec - this->_start.tv_usec) / 1e6);
	}
}

bool	Timer::check(std::string s)
{
	for(size_t i = 0; i < s.length();i++)
	{
		if (isdigit(s[i]) || s[i] == '+')
			continue;
		else
			return false;
	}
	return true;
}