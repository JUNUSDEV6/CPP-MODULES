/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:42:39 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/07 15:52:20 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "constructor default "<< _name <<  " called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "Constructor ScavTrap Called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor ScavTrap Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Constructor Copy Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
		_HitPoints = other._HitPoints;
		_EnergyPoints = other._EnergyPoints;
		_AttackDamage = other._AttackDamage;
	}
	std::cout << "operator constructor called" << std::endl;
	return *this;    
}

void    ScavTrap::attack(const std::string& target)
{
    if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		_EnergyPoints--;
		std::cout << "ScavTrap :" << _name << " attack " << target << " and causing " << _AttackDamage << " amount of damage " << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " can't attack because insufficiency of amount " << _EnergyPoints << " energy" << " or " << _HitPoints << " healt point" <<  std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " now is in keeper mode" << std::endl;
}