/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:44:00 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/05 18:10:16 by yohanafi         ###   ########.fr       */
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
	std::cout << "[ INDEX ] ";
	std::cout << index << std::endl;

	std::cout << "[ FIRST NAME ]";
	std::cout << this->first_name << std::endl;
	
	std::cout << "[ LAST NAME ]";
	std::cout << this->last_name << std::endl;
	
	std::cout << "[ NICKNAME ]";
	std::cout << this->nickname << std::endl;
}
