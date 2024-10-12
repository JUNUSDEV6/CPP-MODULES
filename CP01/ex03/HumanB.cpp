/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:30:34 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/12 14:45:29 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name)
{
	std::cout << "constructor Human_B called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "destructor B called" << std::endl;
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attack with her weapon : " << weapon->getType() << std::endl;
	else

		std::cout << name << " attack with no weapon :(" << std::endl;	
}

void	HumanB::setType(Weapon& newWeapon)
{
	weapon = &newWeapon;
}
