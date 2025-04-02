/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:19:13 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/04/02 15:01:30 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::serialize(void)
{
	std::cout << "constructor Serializer called" << std::endl;
}



uintptr_t	Serializer::serialize(Data* ptr)
{
	return	reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return	reinterpret_cast<Data*>(raw);
}

Serializer::~Serializer(void)
{
	std::cout << "Destructor Serialize called" << std::endl;
}
