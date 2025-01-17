/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:56:00 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/17 14:46:38 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout   << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)   : WrongAnimal(other)
{
    std::cout << "WrongCat copied called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "WrongAnimal operator called" << std::endl;
    return  *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "Destructor WrongCat Called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat says : Wrong meow meow !" << std::endl;
}
