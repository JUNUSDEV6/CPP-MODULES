/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:21 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 15:03:11 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Pardon Grace", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm Contructor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "Destructor Called" << std::endl;
}

void    PresidentialPardonForm::executeAction(void) const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

AForm*  PresidentialPardonForm::create(const std::string &target)
{
    return  new PresidentialPardonForm(target);
}
