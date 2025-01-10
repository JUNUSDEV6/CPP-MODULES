/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:32:28 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/10 18:31:29 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type)
{
    std::cout << "Constructor copied called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != other)
        type = other._type;
    std::cout << "Animal operator Called" << std::endl;
    return *this; 
}

Animal::~Animal(void)
{
    std::cout << "Destructor Animal Called" << std::endl;
}

std::string Animal::getType(void) const
{
    return _type;
}

void	Animal::makeSound(void)
{
	std::cout << "Animal make a sound of Animal" << std::endl;
}