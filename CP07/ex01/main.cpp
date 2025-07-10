/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:44:48 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/07/09 15:30:59 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


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

int main() 
{
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    size_t intSize = sizeof(intArray) / sizeof(int);
    size_t charSize = sizeof(charArray) / sizeof(char);

    std::cout << "Int array: ";
    iter(intArray, intSize, printInt);
    std::cout << std::endl;

    std::cout << "Char array: ";
    iter(charArray, charSize, printChar);
    std::cout << std::endl;

    std::cout << "Incrementing int array..." << std::endl;
    iter(intArray, intSize, increment);

    std::cout << "Modified int array: ";
    iter(intArray, intSize, printInt);
    std::cout << std::endl;

    return 0;
}
