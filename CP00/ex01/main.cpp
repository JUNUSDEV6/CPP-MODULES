/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:10:24 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/10 13:01:23 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#define BOLD_CYAN    "\033[1;36m"
#define RESET   "\033[0m" 


int	main(void)
{
	PhoneBook	phonebook;
	std::string	option;
	int			i = 0;

	while (1)
	{
		std::cout << std::endl;
		std::cout << BOLD_CYAN "[ ADD | SEARCH | EXIT ] : " RESET;
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
		if (option == "EXIT")
			break ;
	}
	return 0;
}
