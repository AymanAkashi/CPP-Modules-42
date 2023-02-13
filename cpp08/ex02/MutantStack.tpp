/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:57:57 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 11:39:34 by aaggoujj         ###   ########.fr       */
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


template <typename T> MutantStack<T>::iterator::iterator() : _ptr(NULL) {}

template <typename T> MutantStack<T>::iterator::~iterator() {}

template <typename T> MutantStack<T>::iterator::iterator(iterator const &rhs) : _ptr(rhs._ptr) {}

template <typename T>  typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator=(iterator const &rhs)
{
	this->_ptr = rhs._ptr;
	return (*this);
}

template <typename T> typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator++()
{
	this->_ptr++;
	return (*this);
}

template <typename T> typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator--()
{
	this->_ptr--;
	return (*this);
}

template <typename T> typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator++(int)
{
	this->_ptr++;
	return (*this);
}

template <typename T> typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator--(int)
{
	this->_ptr--;
	return (*this);
}

template <typename T> bool MutantStack<T>::iterator::operator==(iterator const &rhs)
{
	return (this->_ptr == rhs._ptr);
}

template <typename T> bool MutantStack<T>::iterator::operator!=(iterator const &rhs)
{
	return (this->_ptr != rhs._ptr);
}

template <typename T> T &MutantStack<T>::iterator::operator*()
{
	return (*this->_ptr);
}

template <typename T> T *MutantStack<T>::iterator::operator->()
{
	return (this->_ptr);
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	std::stack <T> tmp(*this); 
	return (typename MutantStack<T>::iterator(&this->top() - this->size() + 1));
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (typename MutantStack<T>::iterator(&this->top() + 1));
}
