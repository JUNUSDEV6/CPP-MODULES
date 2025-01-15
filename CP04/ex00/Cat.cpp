/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:02:02 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/15 13:44:24 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    _type = "Cat";
    std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "constructor Cat copied called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "Cat operator called" << std::endl;
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Destructor Cat Called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat say : meow meow" << std::endl;
}