/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:52:00 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/10 13:01:19 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"
# define BOLD_GREEN   "\033[1;32m"



class	PhoneBook
{
	public:

		void	addContact(int index);
		void	get_contact(void);		

	private:
	
		Contact contacts[8];

};

#endif
