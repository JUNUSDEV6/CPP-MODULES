/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:44:00 by yohanafi          #+#    #+#             */
/*   Updated: 2024/09/28 17:02:13 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void Contact::get_string(int i)
{
	if (i == 0)
	{
		std::cout << "FIRST NAME : ";
		std::cin >> this->first_name; 
	}
	if (i == 1)
	{
		std::cout << "LAST NAME : ";
		std::cin >> this->last_name; 
	}
	if (i == 2)
	{
		std::cout << "NICKNAME : ";
		std::cin >> this->nickname; 
	}
	if (i == 3)
	{
		std::cout << "PHONE NUMBER : ";
		std::cin >> this->phone_number; 
	}
	if (i == 4)
	{
		std::cout << "SECRET : ";
		std::cin >> this->secret; 
	}

}