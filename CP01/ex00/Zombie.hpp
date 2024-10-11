/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:40:21 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/11 12:24:21 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class	Zombie
{
	public:

		Zombie(std::string name);
		~Zombie(void);
		
		void	announce(void);

	private:
	
		std::string	name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif