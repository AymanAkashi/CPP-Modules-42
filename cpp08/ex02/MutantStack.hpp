/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:54:59 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/12 20:56:05 by aaggoujj         ###   ########.fr       */
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
		class iterator
		{
			public:
				iterator();
				iterator(T *ptr){_ptr = ptr;};
				~iterator();
				iterator(iterator const &rhs);
				iterator &operator=(iterator const &rhs);
				iterator &operator++();
				iterator &operator--();
				iterator &operator++(int);
				iterator &operator--(int);
				bool operator==(iterator const &rhs);
				bool operator!=(iterator const &rhs);
				T &operator*();
				T *operator->();
			private:
				T *_ptr;
		};
		iterator begin(void);
		iterator end(void);

};

#include "MutantStack.tpp"


#endif