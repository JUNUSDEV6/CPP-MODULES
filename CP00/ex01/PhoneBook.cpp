/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:11:02 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/08 16:33:11 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#define BOLD_CYAN    "\033[1;36m"
#define RESET   "\033[0m" 

void	PhoneBook::addContact(int index)
{
	contacts[index].set_string();
	
}

void	PhoneBook::get_contact(void)
{
	std::string	index;
	int			nb;

	std::cout << std::endl;
	for (int i = 0; i <= 8; i++)
		contacts[i].get_tab(i + 1);
	std::cout << std::endl;
	std::cout <<  BOLD_GREEN "[ INDEX CONTACT ] : " RESET;
	std::getline(std::cin, index);
	nb = std::atoi(index.c_str());
	if (nb >= 1 && nb <= 8)
	{
		contacts[nb - 1].get_string();
	}
	else
	{
		std::cout << std::endl;
		std::cout << "error input, give between (1 & 8)" << std::endl;
		std::cout << std::endl;
		PhoneBook::get_contact();
	}
}
