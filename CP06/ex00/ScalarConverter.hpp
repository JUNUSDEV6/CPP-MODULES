/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:54:04 by yohanafi          #+#    #+#             */
/*   Updated: 2025/03/04 14:29:07 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>
# include <iostream>

class ScalarConverter
{
	public:
		static void	converter(const std::string	&target);
	
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter(void);

};

#endif
