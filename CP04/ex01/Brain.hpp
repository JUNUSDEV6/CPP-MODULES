/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:32:45 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/16 12:56:34 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class   Brain
{
    public:
        Brain(void);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        virtual ~Brain(void);

        void        setIdeas(int index, const std::string& idea)
        std::string getIdeas(int index) const;

    private:
        std::string     ideas[100];

        
}

#endif