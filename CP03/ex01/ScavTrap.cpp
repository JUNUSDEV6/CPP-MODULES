/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:42:39 by yohanafi          #+#    #+#             */
/*   Updated: 2024/12/27 14:40:07 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name), _HitPoints(100), _EnergyPoints(50), _AttackDamage(20)
{
    std::cout << "Constructor ScravTrap Called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor ScravTrap Called" << std::endl;
}

