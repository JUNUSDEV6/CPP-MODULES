/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:06:22 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 15:23:17 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)  : AMateria("ice")
{
    std::cout << "Constructor Ice Called" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << "Destructor Ice Called" << std::endl;
}

AMateria*   Ice::clone(void) const
{
    return  new Ice();
}

void    Ice::use(ICharacter& target)
{
    std::cout   << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}