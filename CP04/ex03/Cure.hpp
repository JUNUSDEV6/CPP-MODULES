/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:11:38 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/20 15:45:57 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class   Cure : public : AMateria
{
    public:
        Cure(void);
        virtual ~Cure(void);
        virtual AMateria* clone(void) const;
        virtual void    use(ICharacter& target);
}

#endif