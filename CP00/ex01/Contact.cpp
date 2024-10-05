/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:44:00 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/05 16:13:49 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

void Contact::set_string(void)
{
	//char	buff;
	std::string	input;

	std::cout << " Enter info " << std::endl;
	do
	{
		std::cout << "[ FIRST NAME ] :";
		std::getline(std::cin, input);
		if (!input.empty())
		{
			std::cout << "got something : " << input << std::endl;
			break ;
		}
		//std::cout << "got nothing" << std::endl;
		break;
	} while(true);

}