/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:57:06 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/06 17:25:05 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZER_HPP
# define  SERIALIZER_HPP
# include <cstdint>
# include <iostream>

struct	Data
{
	int			i;
	std::string	name;
};

class Serializer
{
	public:
		Serializer(void);
		Serializer(const Serializer &other);
		Serializer &operator=(const Serializer &other);
		~Serializer(void);
	
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};


#endif