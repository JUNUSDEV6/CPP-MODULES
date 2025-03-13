/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:28:20 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/13 15:46:53 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
# define ARRAY_HPP

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
		unsigned int size(void);

	private:
		T				*elements;
		unsigned int	_leng;
		
};

#include "Array.tpp"

#endif
