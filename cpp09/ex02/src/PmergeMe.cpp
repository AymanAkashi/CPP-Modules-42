/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaggoujj <aaggoujj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:10:26 by aaggoujj          #+#    #+#             */
/*   Updated: 2023/03/26 12:29:59 by aaggoujj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

// template <typename T>
// void	Merge(T &v, T left, T right)
// {
// 	size_t i = 0;
// 	size_t j = 0;
// 	size_t k = 0;
// 	while (i < left.size() && j < right.size())
// 	{
// 		if (left[i] < right[j])
// 		{
// 			v[k] = left[i];
// 			i++;
// 		}
// 		else
// 		{
// 			v[k] = right[j];
// 			j++;
// 		}
// 		k++;
// 	}
// 	while (i < left.size())
// 	{
// 		v[k] = left[i];
// 		i++;
// 		k++;
// 	}
// 	while (j < right.size())
// 	{
// 		v[k] = right[j];
// 		j++;
// 		k++;
// 	}
// }

template <typename T>
void merge(T & arr, int start, int m, int end) {
    int n1 = m - start + 1;
    int n2 = end - m;
    T L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0, k = start;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }
}


// template <typename T>
// void	insert_sort(T v)
// {
// 	for (size_t i = 1; i < v.size(); i++)
// 	{
// 		int j = i;
// 		while (j > 0 && v[j] < v[j - 1])
// 		{
// 			std::swap(v[j], v[j - 1]);
// 			j--;
// 		}
// 	}
// }

template <typename T>
void insertion_sort(T & v, int start, int end) {
    for (int i = start + 1; i <= end; i++) {
        int key = v[i];
        int j = i - 1;

        while (j >= start && v[j] > key)
		{
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}

template <typename T>
void	print_element(T v, T left, T right)
{
	std::cout << "Left:  ";
	for (size_t i = 0; i < left.size(); i++)
		std::cout << left[i] << " ";
	std::cout << std::endl;
	std::cout << "Right:  ";
	for (size_t i = 0; i < right.size(); i++)
		std::cout << right[i] << " ";
	std::cout << std::endl;
	std::cout << "Vector:  ";
	for (size_t i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

template <typename T>
bool isSorted(T v)
{
	for (size_t i = 0; i < v.size() - 1; i++)
	{
		if (v[i] > v[i + 1])
			return false;
	}
	return true;
}

template <typename T>
void merge_insertion_sort(T & arr, int start, int end, int size) {
    if (start >= end) {
        return;
    }

    if (end - start + 1 <= size) {
        insertion_sort(arr, start, end);
        return;
    }

    int mid = (start + end) / 2;
    merge_insertion_sort(arr, start, mid, size);
    merge_insertion_sort(arr, mid + 1, end, size);
    merge(arr, start, mid, end);
}



template <typename T>
void	befor(T v)
{
	std::cout << "Before:  ";
	for (size_t i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

template <typename T>
void	After(T v)
{
	std::cout << "After:  ";
	for (size_t i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

template <typename T>
void	TakingTime(T &v, std::string s, Timer &t)
{
	int size = 4;
	t.start();
	merge_insertion_sort(v, 0, v.size() - 1, size);
	t.stop();
	if (t.onlyOne)
	{
		After(v);
		t.onlyOne = false;
		std::cout << "Time to process a range of "<< v.size() << " elements with std::" << s << t.getElapsedTime() << " us" << std::endl;
	}
	else
		std::cout << "Time to process a range of "<< v.size() << " elements with std::" << s << t.getElapsedTime() << " us" << std::endl;
}

void	PmergeMe(char **av)
{
	std::vector<int> v;
	std::deque<int> d;
	Timer T;

	std::cout << std::fixed << std::setprecision(5);
	for(int i = 1; av[i]; i++)
	{
		std::string s(av[i]);
		if (!T.check(s))
			throw std::invalid_argument("Invalid argument");
		int num = atoi(s.c_str());
		if (num >= 0)
		{
			v.push_back(num);
			d.push_back(num);
		}
	}
	befor(v);
	TakingTime(v, "vector ", T);
	TakingTime(d, "deque ", T);
	// if (!isSorted(v))
	// 	std::cout << "Error: vector is not sorted" << std::endl;
	// else
	// 	std::cout << "Vector is sorted" << std::endl;
}





