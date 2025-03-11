/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:35:59 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/11 14:44:38 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

void printInt(int n) 
{
    std::cout << n << " ";
}

void printChar(char c) 
{
    std::cout << c << " ";
}

void increment(int &n) 
{
    n += 1;
}
