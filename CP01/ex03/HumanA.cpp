/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:37:18 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/12 14:09:43 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon)
{
	std::cout << "constructor Human_A called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "destructor called" << std::endl;
}

void	HumanA::attack(void)
{

}