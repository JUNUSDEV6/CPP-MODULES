/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:44:48 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/07/11 12:30:59 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


void printInt(int n) 
{
    std::cout << n << " ";
}

void printIntC(const int n) 
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
    const int intArrayC[] = {1, 2, 3, 4, 5};
    int intArray[] = {1, 2, 3, 4, 5};
    const char charArray[] = {'a', 'b', 'c', 'd', 'e'}; // const ici

    size_t intSize = sizeof(intArray) / sizeof(int);
    size_t charSize = sizeof(charArray) / sizeof(char);

    std::cout << "Int array: ";
    iter(intArrayC, intSize, printIntC); // non const, modifiable
    std::cout << std::endl;

    std::cout << "Char array (const): ";
    iter(charArray, charSize, printChar); // const, non modifiable
    std::cout << std::endl;

    std::cout << "Incrementing int array..." << std::endl;
    iter(intArray, intSize, increment); // OK car modifiable

    std::cout << "Modified int array: ";
    iter(intArray, intSize, printIntC);
    std::cout << std::endl;

    return 0;
}


