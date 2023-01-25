/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinterpreter.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:42:37 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/20 17:47:51 by aaggoujj         ###   ########.fr       */
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

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);


#endif