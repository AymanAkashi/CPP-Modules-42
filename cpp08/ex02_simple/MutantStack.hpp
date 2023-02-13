/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:54:59 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/13 15:55:06 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include<iostream>
#include<stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		std::stack<T> _stack;
	public:
		MutantStack(void);
		~MutantStack();
		MutantStack(MutantStack const &rhs);
		MutantStack &operator=(MutantStack const &rhs);
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void);
		iterator end(void);

};

#include "MutantStack.tpp"


#endif