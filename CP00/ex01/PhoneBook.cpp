/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:11:02 by yohanafi          #+#    #+#             */
/*   Updated: 2024/09/27 17:50:53 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	check_option(std::string option, PhoneBook phonebook)
{
	if (option == "ADD")
	{
		std::cout << "first name : ";
		std::cin << phonebook->first_name;
		std::cout << "last name : ";
		std::cout << "nickname : ";
		std::cout << "phone number : ";
		std::cout << "secret : ";
	}
	if (option == "SEARCH")
		get_user(void);
	if (option == "EXIT")
	
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	option;

	std::cout << "[ ADD | SEARCH | EXIT ] : ";
	std::cin >> option;
	check_option(option, phonebook);

}