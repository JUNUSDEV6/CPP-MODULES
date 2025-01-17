/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:02:02 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/17 14:46:21 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    _type = "Cat";
    std::cout << "Cat Constructor Called" << std::endl;
    brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
    brain = new Brain();
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
    delete brain;
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat say : meow meow" << std::endl;
}

void    Cat::setBrainIdea(int index, const std::string& idea)
{
        this->brain->setIdeas(index, idea);
}

std::string Cat::getBrainIdea(int index) const
{
    return this->brain->getIdeas(index);
}
