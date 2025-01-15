/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:56:00 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/15 16:39:30 by yohanafi         ###   ########.fr       */
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