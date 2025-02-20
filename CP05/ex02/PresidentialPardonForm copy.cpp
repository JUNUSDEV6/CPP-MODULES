/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:21 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:29 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Aform("Zaphod Beeblebrox", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm Contructor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "Destructor Called" << std::endl;
}

void    PresidentialPardonForm::executeAction(void) const
{
    
}