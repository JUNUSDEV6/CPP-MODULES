/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:42:45 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/12 14:03:12 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	public:

		HumanA(const std::string& name, Weapon& weapon);
		~HumanA(void);
		void	attack(void);
	
	private:

		Weapon&		weapon;
		std::string	name;
};

//HumanA	getWeapon()

#endif
