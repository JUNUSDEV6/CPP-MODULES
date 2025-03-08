/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:12:42 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/08 17:39:46 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_TPP
#define WHATEVER_TPP

template <typename T>
void	swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T		min(T &a, T &b)
{
	return (a < b) ? a : b;	
}

template <typename T>
T		max(T &a, T &b)
{
	return (a > b) ? a : b;	
}

#endif
