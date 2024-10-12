/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:51:06 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/12 13:35:20 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type)
{
	std::cout << "constructor Weapon called" << std::endl; 
}

Weapon::~Weapon(void)
{
	std::cout << "destructor Weapon called" << std::endl; 
}

const std::string& Weapon::getType(void) const
{
	return type;
}

void	Weapon::setType(const std::string& str)
{
	type = str;
}
