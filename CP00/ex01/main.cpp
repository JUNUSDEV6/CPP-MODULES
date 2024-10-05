/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:10:24 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/05 17:29:32 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	main(void)
{
	PhoneBook	phonebook;
	std::string	option;
	int			i = 0;

	while (1)
	{
		std::cout << "[ ADD | SEARCH | EXIT ] : ";
		std::getline(std::cin, option);
		if (option == "ADD")
		{
			if (i == 8)
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