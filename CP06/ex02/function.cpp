/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:22:04 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/07 13:50:43 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base	*generate(void)
{
	std::srand(std::time(0));
	int	randNum = std::rand() % 3;

	if (randNum == 0)
		return (new A);
	else if (randNum == 1)
		return (new B);
	else
		return (new C);
}