/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:06:19 by yohanafi          #+#    #+#             */
/*   Updated: 2024/12/05 15:57:55 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>
#include <fstream>
#include <string>

Sed::Sed(const std::string& filename, std::string& s1, std::string& s2)
{
	std::ifstream	inputfile(filename.c_str());
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

	while ((pos = fileContent.find(s1, pos)) != std::string::npos)
	{
		newContent.append(fileContent, 0, pos);
		newContent.append(s2);
		pos += s1length;
		fileContent = fileContent.substr(pos);
		pos = 0;
	}
	newContent += fileContent;
	std::string	outputFilename = filename + "_output.txt";
	std::ofstream outputfile(outputFilename.c_str());
	if (!outputfile)
	{
		std::cerr << "Error with the output file creation process" << std::endl;
		return ;
	}
	outputfile << newContent;
	outputfile.close();

	std::cout << "replacement complete" << outputFilename << std::endl;
}

Sed::~Sed(void)
{
	std::cout << "Destructor Called" << std::endl;
}
