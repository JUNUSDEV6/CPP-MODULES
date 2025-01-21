/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:34:23 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 15:47:33 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "MateriaSource.hpp"
# include "AMateria.hpp"
# include <string>
# include <iostream>

class AMateria;

class   IMateriaSource
{
    public:
        IMateriaSource(void){};
        virtual ~IMateriaSource(void){};
        virtual void    learnMateria(AMateria* m) = 0;
        virtual AMateria* createMateria(std::string const &type) = 0;
        virtual void    printMaterias() = 0;
};

#endif