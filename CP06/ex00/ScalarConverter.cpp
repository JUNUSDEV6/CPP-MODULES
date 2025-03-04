/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:54:16 by yohanafi          #+#    #+#             */
/*   Updated: 2025/03/04 16:01:06 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cmath>

void	ScalarConverter::converter(const std::string &target)
{
	char	c;
	int		i;
	float	f;
	double	d;

	if (target.length() == 3 && target[0] == '\'' && target[2] == '\'')
	{
		c = target[1];
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
	}
	else if (target == "nan" || target == "nanf" || target == "+inff" || target == "+inf" || target == "-inf" || target == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << (target == "nanf" ? "nanf" : target == "-inff" ? "-inff" : target == "+inff" ? "+inff" : target + "f") << std::endl;
        std::cout << "double: " << (target == "nanf" ? "nan" : target == "-inff" ? "-inf" : target == "+inff" ? "+inf" : target) << std::endl;
        return;
	}
	else
	{
		char*	endPtr;

		d = std::strtod(target.c_str(), &endPtr);
		if (*endPtr == 'f' && *(endPtr + 1) == '\0')
		{
			f = static_cast<float>(d);
			i = static_cast<int>(f);
			c = static_cast<char>(i);
		}
		else if (*endPtr == '\0')
		{
			f = static_cast<float>(d);
			i = static_cast<int>(d);
			c = static_cast<char>(i);
		}
		else
		{
			std::cout << "Invalid input" << std::endl;
			return ;
		}
	}

	if (i >= 32 && i <= 126)
		std::cout << "char: '" << c << "'" << std::endl;
	else if (i >= 0 && i <= 255)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;

	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
		
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;	
}
