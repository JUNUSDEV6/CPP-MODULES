/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:44:00 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/08 16:40:09 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

#define BOLD_GREEN   "\033[1;32m"
#define BOLD_RED     "\033[1;31m"
#define BOLD_CYAN    "\033[1;36m"
#define RESET   "\033[0m" 

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
		std::cout << std::setw(10) << BOLD_CYAN "INDEX" RESET
                      << "|" << std::setw(10) << BOLD_CYAN "FIRSTNAME" RESET 
                      << "|" << std::setw(10) << BOLD_CYAN "LASTNAME" RESET 
                      << "|" << std::setw(10) << BOLD_CYAN "NICKNAME" RESET << std::endl;
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

void	Contact::get_string(void)
{
	if (!this->first_name.empty() && !this->last_name.empty() && !this->nickname.empty())
	{
		std::cout << BOLD_GREEN "[ FIRST NAME ] : " RESET;
		std::cout << this->first_name << std::endl;

		std::cout << BOLD_GREEN "[ LAST NAME ] : " RESET;
		std::cout << this->last_name << std::endl;

		std::cout << BOLD_GREEN "[ NICKNAME ] : " RESET;
		std::cout << this->nickname << std::endl;

		std::cout << BOLD_GREEN "[ PHONE NUMBER ] : " RESET;
		std::cout << this->phone_number << std::endl;

		std::cout << BOLD_GREEN "[ SECRET ] : " RESET;
		std::cout << this->secret << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << BOLD_RED "EMPTY CONTACT AT THIS INDEX" RESET << std::endl;
	}
}
