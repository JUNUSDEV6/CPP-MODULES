/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:26:39 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/16 16:15:43 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class   Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog(void);
        
        virtual void    makeSound(void) const;
        void            setBrainIdea(int index, const std::string& idea);
        std::string     getBrainIdea(int index) const;

    private:
        Brain *brain;
};

#endif