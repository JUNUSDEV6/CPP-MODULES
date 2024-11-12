/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:26:55 by yohanafi          #+#    #+#             */
/*   Updated: 2024/11/12 14:53:36 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(void)
{
	std::string test = "test";
	std::string s1 = "ancien_mot";
	std::string s2 = "nouveau_mot";

	Sed	replaceProcess(test, s1, s2);
	return 0;
}
