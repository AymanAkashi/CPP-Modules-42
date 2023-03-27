/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:11:26 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/03/23 13:52:25 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

#define printVar(x) std::cout << #x << " = " << x << std::endl;

bool isopp(char c)
{
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return true;
	return false;
}

bool	check_parcing(std::string s)
{
	int opp = 0;
	int num = 0;
	int count = -1;
	size_t i = 0;
	while (i < s.size())
	{
		if (isdigit(s[i]) && i + 1 < s.size())
		{
			num++;
			count++;
		}
		else if (isopp(s[i]))
		{
			opp++;
			count--;
		}
		else
			return false;
		if ((i != 0 && opp >= num) or count < 0)
			return false;
		i++;
	}
	if (opp + 1 != num or count != 0)
		return false;
	return true;
}

int calcul(int y, char opp, int a)
{
	if (opp == '*')
		return a*y;
	else if (opp == '/')
	{
		if (y != 0)
			return a/y;
		return INT_MAX;
	}
	else if (opp == '-')
		return a-y;
	return a+y;
}
bool	RPN_Calcul(std::string &s)
{
	std::stack<int>	stk;
	int 			sum = 0,x = 0,y = 0;
	for(size_t i = 0; i < s.size(); i++)
	{
		if (!isopp(s[i]))
			stk.push(s[i] - 48);
		else
		{
			x = stk.top();stk.pop();
			y = stk.top();stk.pop();
			sum = calcul(x, s[i], y);
			if (sum == INT_MAX)
			{
				std::cout << "Math ";
				return false;
			}
			stk.push(sum);
		}
	}
	std::cout << sum << std::endl;
	return true;
}

bool	RPN(char *str)
{
	std::string		s(str);
	std::string		a = "";

	for(size_t i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ' && s[i] != '\t')
			a+=s[i];
	}
	s = a;
	if (!check_parcing(s))
		return false;
	if (!RPN_Calcul(s))
		return false;
	return true;
}