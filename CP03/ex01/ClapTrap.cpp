/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:42:19 by yohanafi          #+#    #+#             */
/*   Updated: 2024/12/27 13:42:21 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name),  _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Constructor ClapTrap  Called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _HitPoints(other._HitPoints), _EnergyPoints(other._EnergyPoints), _AttackDamage(other._AttackDamage)
{
	std::cout << "constructor copy called" << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_HitPoints = other._HitPoints;
		_EnergyPoints = other._EnergyPoints;
		_AttackDamage = other._AttackDamage;
	}
	std::cout << "operator constructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		_EnergyPoints--;
		std::cout << "ClapTrap :" << _name << " attack " << target << " and causing " << _AttackDamage << " amount of damage " << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can't attack because insufficiency of amount " << _EnergyPoints << " energy" << " or " << _HitPoints << " healt point" <<  std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints > amount)
	{
		_HitPoints -= amount;
		std::cout << "ClapTrap " << _name << " loose of amount : " << amount << " HitPoints now is amount of Hitpoints " << _HitPoints << std::endl;
	}
	else
	{
		_HitPoints = 0;
		std::cout << "ClapTrap " << _name << " loose of amount : " << amount << " HitPoints now is amount of Hitpoints " << _HitPoints << std::endl;

	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		_EnergyPoints--;
		_HitPoints += amount;
		std::cout << "ClapTrap " << _name << "take care of amount " << amount << " now his HitPoints " << _HitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << "can't attack because insufficiency of amount " << _EnergyPoints << "energy" << "or" << _HitPoints << "healt point" <<  std::endl;
}


