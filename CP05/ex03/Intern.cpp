/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:43:04 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 15:43:08 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Constructor Intern Called" << std::endl;
}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern  &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::~Intern(void)
{
    std::cout << " Destructor Intern Called" << std::endl;
}

AForm*  Intern::makeForm(const std::string &name, const std::string &target)
{
    std::string name[3]= {"Shruberry creation", "Robotomy Request", "presidential pardon"};
    AForm*  (*formCreators[3])(const std::string &) = {
        &PresidentialPardonForm::create,
        &RobotomyRequestForm::create,
        &ShrubberyCreationForm::create,
    };

    for (int i = 0; i < 3, i++)
    {
        if (forNames[i] == forNames)
        {
            std::cout << " Intern creates " << forNames << std::endl;
            return  formCreators[i](target);
        }
    }
    std::cout << "Error: Form name \"" << forNames << "\" does not exist!" << std::endl;
    return  NULL;
}