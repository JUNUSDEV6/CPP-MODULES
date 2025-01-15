/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:32:45 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/15 17:38:42 by yohanafi         ###   ########.fr       */
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

        
}

#endif