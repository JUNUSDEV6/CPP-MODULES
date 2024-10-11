/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:07:53 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/11 14:21:01 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout	<< "horde is coming !!!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout	<< "horde is dead" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << "the zombie of the horde is dead :" << this->name << " X(" << std::endl;  
}
