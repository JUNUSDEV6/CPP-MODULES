/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:47:52 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/13 17:09:52 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"

template <typename T>
Array<T>::Array(void) : elements(NULL), _len(0)
{
	std::cout << "Contructor Array Called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : elements(new T[n]()), _len(n) {}

template <typename T>
Array<T>::Array(const Array &other) : elements(NULL), _len(0)
{
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] elements;
		_len = other._len;
		elements = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			elements[i] = other.elements[i];
	}
	return *this;
}

template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= _len)
		throw std::out_of_range("Index is out of bounds");
	return elements[index];
}

template <typename T>
const T	&Array<T>::operator[](unsigned int index) const
{
	if (index >= _len)
		throw std::out_of_range("Index is out of bounds");
	return elements[index];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return _len;
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Destructor Array Called" << std::endl;
}

#endif
