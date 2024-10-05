/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:11:02 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/05 18:07:45 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>



void	PhoneBook::addContact(int index)
{
	contacts[index].set_string();
	
}

void	PhoneBook::get_contact(void)
{
	std::string	index;
	int			nb;

	std::cout << "[ INDEX CONTACT ] : ";
	std::getline(std::cin, index);
	nb = std::atoi(index.c_str());
	if (nb >= 0 && nb <= 8)
	{
		contacts[nb].get_string(nb);
	}
	else
	{
		std::cout << "error input, give between (0 & 8)" << std::endl;
		PhoneBook::get_contact();
	}
}