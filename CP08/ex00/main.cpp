/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:10:55 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/15 18:51:09 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> vec;
        for (int i = 0; i < 10; ++i)
            vec.push_back(i * 10);

        std::cout << "Searching in vector:" << std::endl;
        std::vector<int>::const_iterator it = easyfind(vec, 30);
        std::cout << "Found: " << *it << std::endl;

        std::cout << "Searching for missing value (999) in vector:" << std::endl;
        it = easyfind(vec, 999); // Will throw

    } catch (std::exception &e) {
        std::cerr << "Vector exception: " << e.what() << std::endl;
    }

    try {
        std::list<int> lst;
        lst.push_back(42);
        lst.push_back(99);
        lst.push_back(17);

        std::cout << "\nSearching in list:" << std::endl;
        std::list<int>::const_iterator it = easyfind(lst, 99);
        std::cout << "Found: " << *it << std::endl;

    } catch (std::exception &e) {
        std::cerr << "List exception: " << e.what() << std::endl;
    }

    try {
        std::deque<int> dq;
        dq.push_back(5);
        dq.push_back(10);
        dq.push_back(15);

        std::cout << "\nSearching in deque:" << std::endl;
        std::deque<int>::const_iterator it = easyfind(dq, 10);
        std::cout << "Found: " << *it << std::endl;

    } catch (std::exception &e) {
        std::cerr << "Deque exception: " << e.what() << std::endl;
    }

    return 0;
}