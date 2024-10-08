/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:44:00 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/08 14:37:11 by yohanafi         ###   ########.fr       */
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
		std::cout << std::endl;
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
		std::cout << std::endl;
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
		std::cout << std::endl;
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
		std::cout << std::endl;
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
		std::cout << std::endl;
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


std::string	Contact::trunc(const std::string &stringg, size_t len)
{
	if (stringg.length() > len)
		return (stringg.substr(0, len) + ".");
	return (stringg);
}

void	Contact::get_tab(int i)
{
	if (!this->first_name.empty() && !this->last_name.empty() && !this->nickname.empty() && i == 1)
	{
		std::cout << std::string(60, '-') << std::endl;
		std::cout << std::setw(10) << "INDEX" 
                      << "|" << std::setw(10) << "FIRSTNAME" 
                      << "|" << std::setw(10) << "LASTNAME" 
                      << "|" << std::setw(10) << "NICKNAME" << std::endl;
        std::cout << std::string(60, '-') << std::endl;
	}
	if (!this->first_name.empty() && !this->last_name.empty() && !this->nickname.empty())
	{
            std::cout << std::setw(10) << i 
                      << "|" << std::setw(10) << trunc(this->first_name, 9) 
                      << "|" << std::setw(10) << trunc(this->last_name, 9) 
                      << "|" << std::setw(10) << trunc(this->nickname, 9) << std::endl;
	}
}

void	Contact::get_string(int index)
{

	std::cout << std::string(80, '-') << std::endl;
	std::cout << std::setw(10) << "INDEX" 
                  << "|" << std::setw(10) << "FIRSTNAME" 
                  << "|" << std::setw(10) << "LASTNAME"
                  << "|" << std::setw(10) << "NICKNAME"
                  << "|" << std::setw(10) << "NUMBER"
                  << "|" << std::setw(10) << "SECRET" << std::endl;
    std::cout << std::string(80, '-') << std::endl;
    // Affiche les informations du contact
    std::cout << std::setw(10) << index + 1
            << "|"  << std::setw(10) << trunc(this->first_name, 9)
            << "|"  << std::setw(10) << trunc(this->last_name, 9)
            << "|"  << std::setw(10) << trunc(this->nickname, 9)
            << "|"  << std::setw(10) << trunc(this->phone_number, 9)
			<< "|" << std::setw(10) << trunc(this->secret, 9) << std::endl;

}
