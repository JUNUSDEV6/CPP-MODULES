/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:21:12 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 15:14:51 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery", 145, 137) ,_target(target)
{
    std::cout << "Constructor Shrubbery  Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "Destructor Shrubbery Called" << std::endl;
}

void    ShrubberyCreationForm::executeAction(void) const
{
    std::ofstream file((_target + "_shruberry").c_str());
    if (file.is_open())
    {
        file << "       #\n"
                "      ###\n"
                "     #####\n"
                "    #######\n"
                "   #########\n"
                "      ###\n";
        file.close();
    }
}

AForm*  ShrubberyCreationForm::create(const std::string &target)
{
    return  new ShrubberyCreationForm(target);
}
