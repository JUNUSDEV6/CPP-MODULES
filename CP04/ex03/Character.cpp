/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:55:07 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/01/17 17:30:12 by youneshanaf      ###   ########.fr       */
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

Character::Character(void)
{
	std::cout << "Destructor Character called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete	_inventory[i];
}
