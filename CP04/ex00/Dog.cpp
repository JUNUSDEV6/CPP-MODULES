/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:25:30 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/10 18:33:44 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)	:_type("Dog")
{
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog& other)	:_type(other._type)
{
	std::cout << "Constructor copied called" << std::endl;
}

Dog& dog::operator=(const Dog& other)
{
	if (this != other)
		type = other._type;
	std::cout << "Dog operator called" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	
}