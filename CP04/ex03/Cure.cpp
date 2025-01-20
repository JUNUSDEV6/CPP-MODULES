/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:42:35 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/20 16:13:06 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Constructor Cure Called" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Destructor Cure Called" << std::endl;
}

AMateria*   Cure::clone(void) const
{
    return new Cure();
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << " ’s wounds *" << std::endl;
}