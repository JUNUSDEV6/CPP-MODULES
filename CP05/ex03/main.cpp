/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:02:20 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 15:43:46 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    AForm* form;

    form = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("presidential pardon", "Alice");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }

    form = someRandomIntern.makeForm("unknown form", "Test");
    if (!form) {
        std::cout << "Form creation failed!" << std::endl;
    }

    return 0;
}
