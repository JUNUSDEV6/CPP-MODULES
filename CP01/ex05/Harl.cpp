/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:05:20 by yohanafi          #+#    #+#             */
/*   Updated: 2024/11/14 17:17:52 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "constructor Harl  called" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "destructor Harl called" << std::endl;
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*ptrToMemberFuction)(void);
	ptrToMemberFuction ptrFunc[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error	
	};
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*ptrFunc[i])();
			return ;
		}
	};
}
