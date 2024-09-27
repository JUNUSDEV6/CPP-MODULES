/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:52:00 by yohanafi          #+#    #+#             */
/*   Updated: 2024/09/27 17:33:48 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CASS_H
# define PHONEBOOK_CASS_H

#include <iostream>


class	Contact
{
	public:
		Contact(void);

		std::string get_string(void);
		int	get_number(void);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;
};

class	PhoneBook
{

	private:
		Contact contact[8];
};

#endif