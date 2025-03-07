/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:19:13 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/07 11:59:36 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data* ptr)
{
	return	reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return	reinterpret_cast<Data*>(raw);
}
