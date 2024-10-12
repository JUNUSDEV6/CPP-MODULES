/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:06:19 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/12 16:52:03 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>
#include <fstream>
#include <string>

Sed::Sed(const std::string& filename, std::string& s1, std::string& s2)
{
	std::ifstream	inputfile(filename);
	if (!inputfile)
		std::cerr << "Error with the open file process" << std::endl;
		
	std::string fileContent;
	std::string	line;
	while (std::getline(inputfile, line))
		fileContent += line + "\n";
	inputfile.close();
	
	std::string	newContent;
	size_t		pos;
	size_t		s1length;
	s1length = s1.length();
	git
}