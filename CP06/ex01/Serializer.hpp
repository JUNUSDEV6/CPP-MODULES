/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:57:06 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/04/25 15:04:18 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZER_HPP
# define  SERIALIZER_HPP
# include <iostream>

struct	Data
{
	int			id;
	std::string	name;
};

class Serializer
{
	public:
		static std::size_t serialize(Data* ptr);
		static Data* deserialize(std::size_t raw);
	
	private:
		Serializer(void);
		Serializer(const Serializer &other);
		Serializer &operator=(const Serializer &other);
		~Serializer(void);
};


#endif
