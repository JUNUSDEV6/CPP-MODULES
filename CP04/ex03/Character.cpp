/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:55:07 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/01/21 12:50:37 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Contructor Character Called" << std::endl;
}

Character::Character(const std::string &name) : _name(name)
{
	std::cout << "contructor name called" << std::endl;
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& other) : _name(other._name)
{
	for(int i = 0; i < 4; i++)
	{
		if(other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete	_inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character(void)
{
	std::cout << "Destructor Character called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete	_inventory[i];
}

std::string	const Character::getName(void)	const
{
	return	_name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if	(!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 4)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 4)
		_inventory[idx]->use(target);
}