/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:45:20 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/20 17:46:14 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reinterpreter.hpp"

int main() {
    Data data;
    data.x = 5;
    data.y = 3.14;
	data.z = "Hello World!";

    uintptr_t serialized = serialize(&data);
    Data* deserialized = deserialize(serialized);

    if (deserialized == &data)
	{
        std::cout << "Serialization and deserialization successful" << std::endl;
		std::cout << "x: " << deserialized->x << std::endl;
		std::cout << "y: " << deserialized->y << std::endl;
		std::cout << "z: " << deserialized->z << std::endl;
	}
    else
        std::cout << "Serialization and deserialization failed" << std::endl;
}