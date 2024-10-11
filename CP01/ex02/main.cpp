/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:33:55 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/11 15:39:10 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	name = "HI THIS IS BRAIN";
	std::string	*stringPTR = &name;
	std::string	&stringREF = name;

	std::cout << "L’adresse de la string en mémoire : " << &name << std::endl;
	std::cout << "L’adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "La valeur de la string : " << name << std::endl;
	std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl;
}
