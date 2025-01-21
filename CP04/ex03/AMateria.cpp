/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:54:31 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 15:30:07 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{
    std::cout << "AMateria Contructor Called" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "Destructor AMateria Called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type){}

std::string const &AMateria::getType(void) const
{
    return  _type;
}

void    AMateria::use(ICharacter& target)
{
    (void) target;
}