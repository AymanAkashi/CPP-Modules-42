/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:53:00 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/11 14:45:10 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef dynamic_HPP
#define dynamic_HPP

#include<iostream>
#include <cstdlib>


class Base {
public:
    virtual ~Base(){}
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);


#endif