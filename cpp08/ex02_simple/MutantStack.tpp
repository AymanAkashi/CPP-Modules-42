/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:57:57 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 15:56:51 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) {}

template<typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &rhs) : std::stack<T>(rhs) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &rhs)
{
	std::stack<T>::operator=(rhs);
	return (*this);
}



//****************************************************************************

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (std::stack<T>::c.begin());
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (std::stack<T>::c.begin());
}