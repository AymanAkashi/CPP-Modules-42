/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:13:56 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/02/12 11:21:24 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stdexcept>
#include <cstdlib>


template <typename T> class Array
{
    private:
        T* data;
        unsigned int size_;

    public:
        Array() : data(0), size_(0) {}
        Array(unsigned int n) : data(new T[n]), size_(n) {}
        Array(const Array<T>& other) : data(new T[other.size_]), size_(other.size_)
        {
            for (unsigned int i = 0; i < size_; i++)
                data[i] = other.data[i];
        }
        Array<T>& operator=(const Array<T>& ref)
        {
            if (this != &ref) {
                T* temp = new T[ref.size_];
                for (unsigned int i = 0; i < ref.size_; i++)
                    temp[i] = ref.data[i];
                delete[] data;
                data = temp;
                size_ = ref.size_;
            }
            return *this;
        }

        ~Array()
        {
            delete[] data;
        }

        T& operator[](unsigned int index)
        {
            if (index >= size_)
                throw std::out_of_range("Index out of bounds");
            return data[index];
        }

        unsigned int size() const
        {
            return size_;
        }
};

