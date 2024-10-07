/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:44:00 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/07 14:21:37 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

void Contact::set_string(void)
{
	std::string	input;

	do
	{
		std::cout << "[ FIRST NAME ] : ";
		std::getline(std::cin, input);
		if (!input.empty())
		{
			this->first_name = input;
			break ;
		}
	} while(true);
	input = "";
	do
	{
		std::cout << "[ LAST NAME ] : ";
		std::getline(std::cin, input);
		if (!input.empty())
		{
			this->last_name = input;
			break ;
		}
	} while(true);
	input = "";
	do
	{
		std::cout << "[ NICKNAME ] : ";
		std::getline(std::cin, input);
		if (!input.empty())
		{
			this->nickname = input;
			break ;
		}
	} while(true);
	input = "";
	do
	{
		std::cout << "[ PHONE NUMBER ] : ";
		std::getline(std::cin, input);
		if (!input.empty())
		{
			this->phone_number = input;
			break ;
		}
	} while(true);
	input = "";
	do
	{
		std::cout << "[ SECRET ] : ";
		std::getline(std::cin, input);
		if (!input.empty())
		{
			this->secret = input;
			break ;
		}
	} while(true);
	input = "";
}

void	Contact::get_string(int index)
{
	 // Affiche les en-têtes des colonnes
    std::cout << std::setw(10) << "[ INDEX ]"
              << std::setw(15) << "[ FIRST NAME ]"
              << std::setw(15) << "[ LAST NAME ]"
              << std::setw(15) << "[ NICKNAME ]" << std::endl;

    // Affiche les informations du contact
    std::cout << std::setw(10) << index
              << std::setw(15) << this->first_name
              << std::setw(15) << this->last_name
              << std::setw(15) << this->nickname << std::endl;
}
