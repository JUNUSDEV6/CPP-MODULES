/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:19:13 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/04/25 15:24:12 by yohanafi         ###   ########.fr       */
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

std::size_t	Serializer::serialize(Data* ptr)
{
	return	reinterpret_cast<size_t>(ptr); // reinterpret_cast can switch 2 type fundamental diff pointeur <->int
}

Data*	Serializer::deserialize(std::size_t raw)
{
	return	reinterpret_cast<Data*>(raw);
}

Serializer::~Serializer(void)
{
	std::cout << "Destructor Serialize called" << std::endl;
}
