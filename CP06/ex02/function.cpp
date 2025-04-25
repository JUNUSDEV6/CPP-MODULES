/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:22:04 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/04/25 15:07:27 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>


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

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast &) {}
	
	try 
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (std::bad_cast &) {}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}catch (std::bad_cast &) {}
}
