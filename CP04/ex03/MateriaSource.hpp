/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:45:38 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 15:48:30 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include <string>

class AMateria;

class   MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource(void);

        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const &type);
        virtual void    printMaterias();
    
    private:
        AMateria* _template[4];
};

#endif