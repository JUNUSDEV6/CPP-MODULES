/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:57:12 by yohanafi          #+#    #+#             */
/*   Updated: 2024/11/12 16:01:31 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
# include <string>

class	Sed
{
	public:

		Sed(const std::string& filename, std::string& s1, std::string& s2);
		~Sed(void);

		
	private:

		std::string	filename;
		std::string	s1;
		std::string	s2;

};

#endif
