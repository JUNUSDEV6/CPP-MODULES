/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:33:38 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 14:28:51 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "Constructor MateriaSource Called" << std::endl;
    for (int i = 0; i < 4; i++)
        _template[i] = NULL;
}

AMateria::AMateria(const AMateria& other)
{
    for(int i = 0; i < 4; i++)
    {
        if (other._template[i])
            _template[i] = other._template[i]->clone();
        else
            _template[i] = NULL;
    }
}

AMateria&   AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_template[i])
                delete  _template[i];
            if (other._template[i])
                _template = other._template[i]->clone();
            else
                _template[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "Destructor MateriaSource Called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete  _template[i];
}

void    MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (!_template[i])
        {
            _template[i] = m;
            return ;
        }
}

AMateria*   AMateria::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        (_template[i] && _template[i]->getType() == type)
            return _template[i]->clone();
    }
    return NULL;
}