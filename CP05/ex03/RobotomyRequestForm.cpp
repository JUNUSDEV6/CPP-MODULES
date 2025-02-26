/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:31:14 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 11:55:34 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robot Rquest", 72, 45), _target(target)
{
    std::cout << "Contructor Robot Called" << std::endl;
    std::srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "Destructor Robot Called" << std::endl;
}

void    RobotomyRequestForm::executeAction(void) const
{
    std::cout << "Make a some drilling noises" << std::endl;
    
    if (std::rand() % 2 == 0)
        std::cout << _target << " has been Successfully randomized :D" << std::endl;
    else
        std::cout << _target << " randomized failed :(";
}
