/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:17:34 by yohanafi          #+#    #+#             */
/*   Updated: 2024/10/11 14:28:29 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		nb = 5;
	Zombie	*hordeZombie = zombieHorde(nb, "Michel");

	for (int i = 0; i < nb; i++)
		hordeZombie[i].announce();
	delete[]hordeZombie;
	return 0;
}
