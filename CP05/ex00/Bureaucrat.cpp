/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:59:56 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/22 18:11:43 by yohanafi         ###   ########.fr       */
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
    
}