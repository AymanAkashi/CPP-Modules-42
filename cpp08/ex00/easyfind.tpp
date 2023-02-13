/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:47:41 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/12 15:10:50 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
int easyfind(T container, int value) {
    typename T::iterator it;
    for (it = container.begin(); it != container.end(); ++it) {
        if (*it == value) {
            return *it;
        }
    }
    throw std::runtime_error("Value not found !!!");
}