/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:58:22 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/08 17:31:13 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
# define WHATEVER_HPP


template <typename T>
void	swap(T &a, T &b);

template <typename T>
T		min(T &a, T &b);

template <typename T>
T		max(T &a, T &b);

#include "whatever.tpp"

#endif
