/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:26:43 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/15 13:43:11 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class   Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        virtual ~Cat(void);

        virtual void    makeSound(void) const;
};

#endif