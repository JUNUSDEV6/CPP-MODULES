/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:25:30 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/17 14:46:10 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& other)	: AAnimal(other)
{
	brain = new Brain();
	for(int i = 0; i < 100; ++i)
		this->setBrainIdea(i, other.getBrainIdea(i));
	std::cout << "Constructor Dog copied called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Dog operator called" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog Called" << std::endl;
	delete brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog say : WAF WAF" << std::endl;
}


void	Dog::setBrainIdea(int index, const std::string& idea)
{
		this->brain->setIdeas(index, idea);
}

std::string	Dog::getBrainIdea(int index) const
{
		return this->brain->getIdeas(index);
}
