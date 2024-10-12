/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:37:18 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/12 14:45:26 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : weapon(&weapon), name(name)
{
	std::cout << "constructor Human_A called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "destructor A called" << std::endl;
}

void	HumanA::attack(void)
{
	if (weapon)
		std::cout << name << " attack with her weapon : " << weapon->getType() << std::endl;
	else

		std::cout << name << " attack with no weapon :(" << std::endl;	
}
