/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:54:04 by yohanafi          #+#    #+#             */
/*   Updated: 2025/04/08 16:05:31 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>
# include <iostream>

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3
# define SPECIAL 4
# define INVALID 5

class ScalarConverter
{
	public:
		static void	convert(const std::string	&target);
	
	private:
		ScalarConverter(void) = delete;
		ScalarConverter(const ScalarConverter &other) = delete;
		ScalarConverter &operator=(const ScalarConverter &other) = delete;
		~ScalarConverter(void) = delete;

};

#endif
