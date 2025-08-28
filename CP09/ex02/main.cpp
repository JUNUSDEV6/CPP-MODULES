/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 17:02:46 by yohanafi          #+#    #+#             */
/*   Updated: 2025/08/23 18:37:06 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    try {
        PmergeMe    pmergeMe;
        pmergeMe.parseInput(argc, argv);
        pmergeMe.sortAndDisplay();
    }
    catch (std::exception& e) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    return 0;
}