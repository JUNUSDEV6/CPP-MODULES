/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:51:06 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/11 16:06:12 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "constructor Weapon called" << std::endl; 
}

Weapon::~Weapon(void)
{
	std::cout << "destructor Weapon called" << std::endl; 
}

std::string const &getType(void)
{
	return (this-)
}
