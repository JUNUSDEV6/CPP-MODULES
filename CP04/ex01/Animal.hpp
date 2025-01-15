/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:27:08 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/15 13:27:26 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class   Animal
{
    public:
        Animal(void);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal(void);

        std::string		getType(void) const;
        virtual void    makeSound(void) const;

    protected:
        std::string		_type;
};

#endif