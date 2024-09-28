/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:10:24 by yohanafi          #+#    #+#             */
/*   Updated: 2024/09/28 17:13:05 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	option;

	while (option != "EXIT")
	{
		std::cout << "[ ADD | SEARCH | EXIT ] : ";
		std::cin >> option;
		if (option == "ADD")
			for (int i = 0; i < ; i++)
				phonebook.addContact(i);
		
	}
}