/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinterpreter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:44:16 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/11 13:23:02 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reinterpreter.hpp"


Serializer::Serializer()
{
//empty
}

Serializer::~Serializer()
{
//empty
}

Serializer const &Serializer::operator=(Serializer const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return *this;
}

Serializer::Serializer(Serializer const &rhs)
{
    *this = rhs;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
