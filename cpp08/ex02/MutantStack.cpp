/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:57:57 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/24 14:58:53 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T> MutantStack<T>::~MutantStack() {}

template <typename T> MutantStack<T>::MutantStack(MutantStack const &rhs) : std::stack<T>(rhs) {}

template <typename T> MutantStack<T> &MutantStack<T>::operator=(MutantStack const &rhs)
{
	std::stack<T>::operator=(rhs);
	return (*this);
}

template <typename T> void MutantStack<T>::push(T const &val)
{
	std::stack<T>::push(val);
}

template <typename T> void MutantStack<T>::pop()
{
	std::stack<T>::pop();
}

template <typename T> T &MutantStack<T>::top()
{
	return (std::stack<T>::top());
}

template <typename T> size_t MutantStack<T>::size()
{
	return (std::stack<T>::size());
}

template <typename T> bool MutantStack<T>::empty()
{
	return (std::stack<T>::empty());
}

template <typename T> void MutantStack<T>::emplace(T const &val)
{
	std::stack<T>::emplace(val);
}

template <typename T> void MutantStack<T>::swap(MutantStack &x)
{
	std::stack<T>::swap(x);
}

template <typename T> MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template <typename T> MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

template <typename T> MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (std::stack<T>::c.rbegin());
}

template <typename T> MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (std::stack<T>::c.rend());
}
