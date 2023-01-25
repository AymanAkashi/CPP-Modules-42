/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:54:59 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/24 14:59:46 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include<iostream>
#include<stack>

template <typename T>
class MutantStack
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &rhs);
		MutantStack &operator=(MutantStack const &rhs);
		push(T const &val);
		pop();
		top();
		size();
		empty();
		emplace(T const &val);
		swap(MutantStack &x);
	private:
		std::stack<T> _stack;
};


#endif