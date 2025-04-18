/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:55:58 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/17 14:46:33 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)  :   _type("WrongAnimal")
{
    std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
    std::cout << "Constructor WrongAnimal copied called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "WrongAnimal operator Called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Destructor WrongAnimal Called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return  _type;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << " WrongAnimal doesn't make sound" << std::endl;
}
