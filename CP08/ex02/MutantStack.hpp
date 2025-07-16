/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:08:31 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/16 14:08:52 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class   MutantStack : public std::stack<T>
{
    public:
        typedef typename    std::stack<T>::container_type::iterator                 iterator;
        typedef typename    std::stack<T>::container_type::const_iterator           const_iterator;
        typedef typename    std::stack<T>::container_type::reverse_iterator         reverse_iterator;
        typedef typename    std::stack<T>::container_type::const_reverse_iterator   const_reverse_iterator;

        MutantStack(void);
        MutantStack(const MutantStack& other);
        MutantStack &operator=(const MutantStack& other);
        ~MutantStack(void);

        iterator                begin();
        iterator                end();

        const_iterator          begin() const;
        const_iterator          end() const;
        
        reverse_iterator        rbegin();
        reverse_iterator        rend();
        
        const_reverse_iterator  rbegin() const;
        const_reverse_iterator  rend() const;
};

#include "MutantStack.tpp"

#endif