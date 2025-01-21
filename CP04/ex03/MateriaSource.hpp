/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:45:38 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 13:09:55 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria& other);
        ~MateriaSource(void);

        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const &type);
    
    private:
        AMateria* _template[4];
};

#endif