/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:12:15 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/08 15:37:59 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "constructor default" << _name << " called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "Constructor FragTrap Called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "contructor copy called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
     if (this != &other)
    {
        _name = other._name;
		_HitPoints = other._HitPoints;
		_EnergyPoints = other._EnergyPoints;
		_AttackDamage = other._AttackDamage;
	}
	std::cout << "operator FragTrap constructor called" << std::endl;
	return *this;    
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap class ask for a positif high five request to " << _name << std::endl; 
}
