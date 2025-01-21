/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:33:38 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 15:51:48 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "Constructor MateriaSource Called" << std::endl;
    for (int i = 0; i < 4; i++)
        _template[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for(int i = 0; i < 4; i++)
    {
        if (other._template[i])
            _template[i] = other._template[i]->clone();
        else
            _template[i] = NULL;
    }
}

MateriaSource&   MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_template[i])
                delete  _template[i];
            if (other._template[i])
                _template[i] = other._template[i]->clone();
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

AMateria*   MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
       if (_template[i] && _template[i]->getType() == type)
            return _template[i]->clone();
    }
    return NULL;
}

void    MateriaSource::printMaterias(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_template[i])
            std::cout << "nothing in "<< i << _template[i] << " :(" << std::endl;
        else
            std::cout << "we have something in" << i << _template[i] << " :)" << std::endl;
    }
}