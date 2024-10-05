/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:10:24 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/05 18:11:19 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	main(void)
{
	PhoneBook	phonebook;
	std::string	option;
	int			i = 1;

	while (1)
	{
		std::cout << "[ ADD | SEARCH | EXIT ] : ";
		std::getline(std::cin, option);
		if (option == "ADD")
		{
			if (i == 9)
				i = 0;
			phonebook.addContact(i);
			i++;
		}
		if (option == "SEARCH")
		{
			phonebook.get_contact();
		}
	}
}