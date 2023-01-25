/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:57:31 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/20 12:57:09 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool convert::ischar()
{
	for(size_t i = 0; i < this->_str.size(); i++)
		if (!isdigit(this->_str[i]) && this->_str[i] != '+')
			return (false);
	return (true);
}


bool convert::isint()
{
	if (this->_str.size() > 10 or (isdigit(this->_str.back()) and this->_str.back() != 'f'))
		return (false);
	for(size_t i = 0; i < this->_str.size(); i++)
		if (!isdigit(this->_str[i]) && this->_str[i] != '-' && this->_str[i] != '+' && this->_str[i] != '.' && this->_str[i] != 'f')
			return (false);
	size_t i = 0;
	for(i = 0; i < this->_str.size() && this->_str[i] != '.' && this->_str[i] != 'f'; i++);
	if (this->_str[i] == '.' && !isdigit(this->_str[i+1]))
		return (false);
	if (this->_str[i] == 'f' && this->_str[i+1] != '\0')
		return (false);
	return (true);
}

bool	convert::isfloat()
{
	if (this->_str.size() > 10 or (isdigit(this->_str.back()) and this->_str.back() != 'f'))
		return (false);
	for(size_t i = 0; i < this->_str.size(); i++)
		if (!isdigit(this->_str[i]) && this->_str[i] != '-' && this->_str[i] != '+' && this->_str[i] != '.' && this->_str[i] != 'f')
			return (false);
	return (true);
}

bool	convert::isdouble()
{
	if (this->_str.size() > 10 or (isdigit(this->_str.back()) and this->_str.back() != 'f'))
		return (false);
	for(size_t i = 0; i < this->_str.size(); i++)
		if (!isdigit(this->_str[i]) && this->_str[i] != '-' && this->_str[i] != '+' && this->_str[i] != '.' && this->_str[i] != 'f')
			return (false);
	return (true);
}