/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:19:13 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/04/22 13:15:17 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "constructor Serializer called" << std::endl;
}

Serializer::Serializer(const Serializer &other)
{
	std::cout << "copy constructor serializer" << std::endl;
	*this = other;
	return ;
}

Serializer &Serializer::operator=(const Serializer &other)
{
	std::cout << "copy assignement operator" << std::endl;
	(void)other;
	return *this;
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
