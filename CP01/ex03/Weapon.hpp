/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:46:38 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/12 13:27:18 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class	Weapon
{
	public:

		Weapon(const std::string& type);
		~Weapon(void);

		const std::string&	getType(void) const;
		void		setType(const std::string& str);
	
	private:
		std::string	type;
};


#endif
