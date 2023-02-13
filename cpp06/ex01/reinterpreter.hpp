/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinterpreter.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:42:37 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/11 13:23:27 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef reinterpreter_HPP
#define reinterpreter_HPP

#include<iostream>
#include <cstdint>

struct Data
{
    int x;
    double y;
    std::string z;
};
class Serializer
{
    private:
        Serializer();
        Serializer(Serializer const &rhs);
    public:
        ~Serializer();
        Serializer const &operator=(Serializer const &rhs);
        static Data* deserialize(uintptr_t raw);
        static uintptr_t serialize(Data* ptr);
};



#endif