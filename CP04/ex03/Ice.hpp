/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:00:37 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 14:44:09 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     ICE_HPP
# define    ICE_HPP
# include   "AMateria.hpp"

class   Ice : public AMateria
{
    public:
        Ice(void);
        virtual ~Ice(void);
        virtual AMateria* clone(void) const;
        virtual void    use(ICharacter& target);
};

#endif