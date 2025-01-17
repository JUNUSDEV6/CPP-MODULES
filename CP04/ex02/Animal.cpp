/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:44:07 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/01/17 14:52:28 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Animal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
    std::cout << "AAnimal Constructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type)
{
    std::cout << "Constructor AAnimal copied called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "AAnimal operator Called" << std::endl;
    return *this; 
}

AAnimal::~AAnimal(void)
{
    std::cout << "Destructor AAnimal Called" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return _type;
}

