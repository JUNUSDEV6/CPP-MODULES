/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:26:39 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/15 13:40:40 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class   Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog(void);
        
        virtual void    makeSound(void) const;
};

#endif