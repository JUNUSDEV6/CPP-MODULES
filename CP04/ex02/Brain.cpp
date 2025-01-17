/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:40:06 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/17 14:46:49 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Contructeur Called" << std::endl;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = "";
}

Brain::Brain(const Brain& other)
{
    std::cout << "contructor copied called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for(int i = 0; i < 100; ++i)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Destructor Brain called" << std::endl;
}

void        Brain::setIdeas(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        this->ideas[index] = idea;
}

std::string Brain::getIdeas(int index) const
{
    if (index >= 0 && index < 100)
        return this->ideas[index];
    return "";
}
