/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:46:58 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/09 09:50:51 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::IMateriaSource(IMateriaSource const & src)
{
	*this = src;
}

IMateriaSource &IMateriaSource::operator=(IMateriaSource const & rhs)
{
	(void)rhs;
	return (*this);
}

IMateriaSource::~IMateriaSource()
{
}

