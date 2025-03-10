/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:05:38 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/10 13:21:25 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T, typename Func>

void	iter(T *array, size_t length, Func func)
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}


#endif
