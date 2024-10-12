/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:22:57 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/12 14:35:06 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	public:

		HumanB(const std::string& name);
		~HumanB(void);
		void	attack(void);

	private:
	
		Weapon*		weapon;
		std::string	name;
};

#endif
