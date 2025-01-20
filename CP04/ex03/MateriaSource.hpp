/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:45:38 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/20 18:06:48 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        ~MateriaSource(void);

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const &);
};

#endif