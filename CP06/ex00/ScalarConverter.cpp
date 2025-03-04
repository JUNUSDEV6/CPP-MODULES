/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:54:16 by yohanafi          #+#    #+#             */
/*   Updated: 2025/03/04 14:58:36 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "Constructor ScalarConverter Called" << std::endl;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "Destuctor ScalarConverter Called" << std::endl;
}

void	ScalarConverter::converter(const std::string &target)
{
	char	c;
	int		i;
	float	flt;
	double	dbl;

	if (target.length() == 3 && target[0] == '\'' && target[2] == '\'')
	{
		c = target[1];
		i = static_cast<int>(c);
		flt = static_cast<float>(c);
		dbl = static_cast<double>(c);
	}
	else if (target == "nan" || target == "nanf" || target == "+inff" || target == "+inff" || target == "-inf" || target == "-inff")
	{
		
	}
	
}