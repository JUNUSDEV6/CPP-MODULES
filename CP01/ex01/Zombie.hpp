/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:53:48 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/11 14:25:08 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class	Zombie
{
	public:

		Zombie(void);
		~Zombie(void);

		void	setName(std::string name);
		void	announce(void);

	private:

		std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
