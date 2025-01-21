/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:34:23 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 13:09:46 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "MateriaSource.hpp"

class   IMateriaSource
{
    public:
        IMateriaSource(void);
        virtual ~IMateriaSource(void);
        virtual void learnMateria(AMateria* m) = 0;
        virtual AMateria* createMateria(std::string const &type) = 0;
} 

#endif