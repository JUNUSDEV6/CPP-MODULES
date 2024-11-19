/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:16:22 by yohanafi          #+#    #+#             */
/*   Updated: 2024/11/19 15:13:46 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Constrcuteur Harl Called" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Destructeur called" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-kethup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std:::cout << "[ INFO ]" << std::endl;
	std::cout << "i cannot believe adding extra bacon costs more money. you dind't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std:endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think Ideserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "this is unacceptble! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*levels[])(void) = {

		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levelNames[] = { "DEBUG", "INFO", "WARNING", "ERROR" }

	for (int i = 0, i < 4, i++)
	{
		level == levelNames[i]
		{
			(this->*levels[i])();
			return ;
		}
	}
	std::cout << "[ probably complaining about insignificant problems ]" << std::endl;
}
