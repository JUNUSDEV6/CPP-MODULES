/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:23:54 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/17 13:27:45 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main() {
    try {
        Bureaucrat b1("Alice", 2);
        std::cout << b1 << std::endl;
        b1.incrGrade();
        std::cout << "After increment: " << b1 << std::endl;
        
        Bureaucrat b2("Bob", 149);
        std::cout << b2 << std::endl;
        b2.decrGrade();
        std::cout << "After decrement: " << b2 << std::endl;
        
        Bureaucrat b3("Charlie", 151); // Should throw an exception
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat b4("David", 1);
        b4.incrGrade(); // Should throw an exception
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat b5("Eve", 150);
        b5.decrGrade(); // Should throw an exception
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}
