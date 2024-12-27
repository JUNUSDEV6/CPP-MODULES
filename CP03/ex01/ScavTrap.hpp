/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:42:24 by yohanafi          #+#    #+#             */
/*   Updated: 2024/12/27 13:42:26 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public Claptrap
{
	public:
		ScravTrap(std::string name);
		ScravTrap(const ScravTrap& other);
		ScravTrap& operator=(const ScravTrap& other);
		~ScravTrap(void);

		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
