/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:32:45 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/17 14:27:45 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class   Brain
{
    public:
        Brain(void);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        virtual ~Brain(void);

        void        setIdeas(int index, const std::string& idea);
        std::string getIdeas(int index) const;

    private:
        std::string     ideas[100];      
};

#endif
