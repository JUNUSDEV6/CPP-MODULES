/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:28:20 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/07/11 12:05:04 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename  T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &other);
		~Array(void);
		
		Array	&operator=(const Array &other);
		T		&operator[](unsigned int index);
		const T	&operator[](unsigned int index) const;
		unsigned int size(void) const;

	private:
		T				*elements;
		unsigned int	_len;
		
};

#include "Array.tpp"

#endif
