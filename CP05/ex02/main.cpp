/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:02:20 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/20 16:02:58 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bob("Bob", 1);
    ShrubberyCreationForm tree("home");
    RobotomyRequestForm robot("Alice");
    PresidentialPardonForm pardon("Charlie");

    bob.signForm(tree);
    bob.executeForm(tree);

    bob.signForm(robot);
    bob.executeForm(robot);

    bob.signForm(pardon);
    bob.executeForm(pardon);

    return 0;
}
