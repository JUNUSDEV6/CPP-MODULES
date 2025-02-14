/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:59:56 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/14 15:03:16 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat Contructor Called" << std::endl;
}



Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return _name;
}

std::string Bureaucrat::getGrade(void) const
{
    return  _grade;
}