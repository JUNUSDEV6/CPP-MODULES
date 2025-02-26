/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:02:20 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 12:33:09 by yohanafi         ###   ########.fr       */
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
    try {
        Bureaucrat boss("Boss", 1);           // Grade 1 : peut tout signer et exécuter
        Bureaucrat manager("Manager", 50);    // Grade 50 : ne peut pas tout signer/exécuter
        Bureaucrat intern("Intern", 150);     // Grade 150 : ne peut quasiment rien faire

        ShrubberyCreationForm shrubbery("Garden");    // Sign 145, Exec 137
        RobotomyRequestForm robotomy("Bender");       // Sign 72, Exec 45
        PresidentialPardonForm pardon("Alice");       // Sign 25, Exec 5

        std::cout << "==== FORMULAIRES INITIALEMENT ====" << std::endl;
        std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << pardon << std::endl;

        // 🔹 TEST : Un bureaucrate avec un grade insuffisant essaie de signer un formulaire
        std::cout << "\n==== TEST : ÉCHEC SIGNATURE (Intern essaie de signer) ====" << std::endl;
        intern.signForm(shrubbery);

        // 🔹 TEST : Signature et exécution réussies avec Boss
        std::cout << "\n==== TEST : SIGNATURE ET EXÉCUTION RÉUSSIES ====" << std::endl;
        boss.signForm(shrubbery);
        boss.signForm(robotomy);
        boss.signForm(pardon);

        boss.executeForm(shrubbery);
        boss.executeForm(robotomy);
        boss.executeForm(pardon);

        // 🔹 TEST : Tentative d'exécution sans signature
        std::cout << "\n==== TEST : EXÉCUTION ÉCHOUÉE (non signé) ====" << std::endl;
        ShrubberyCreationForm unSignedForm("Park");
        manager.executeForm(unSignedForm); // Doit échouer car non signé

        // 🔹 TEST : Un grade trop bas tente d'exécuter un formulaire signé
        std::cout << "\n==== TEST : EXÉCUTION ÉCHOUÉE (grade trop bas) ====" << std::endl;
        manager.executeForm(pardon); // Doit échouer (exec grade = 5, manager = 50)

    } catch (std::exception &e) {
        std::cerr << "Exception attrapée: " << e.what() << std::endl;
    }

    return 0;
}
