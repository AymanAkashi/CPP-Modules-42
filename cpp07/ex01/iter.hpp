/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:57:02 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/01/21 09:57:41 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, size_t N>
void iter(T(&arr)[N], size_t len, void (*func)(T&)) {
    if (len > N) {
        throw std::invalid_argument("len is greater than array size");
    }
    for (size_t i = 0; i < len; i++) {
        func(arr[i]);
    }
}

#endif