/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:58:22 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/07/03 14:39:49 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
# define WHATEVER_HPP


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
