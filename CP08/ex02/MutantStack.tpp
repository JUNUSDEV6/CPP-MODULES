/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:05:08 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/15 20:56:10 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

MutantStack::MutantStack() {}

MutantStack::~MutantStack() {}

MutantStack::MutantStack(const MutantStack& other) : std::stack<T>(other) {}

MutantStack::&operator=(const MutantStack& other) {
    
}

iterator    MutantStack::begin() {
    return this->c.begin();
}

iterator    MutantStack::end() {
    return  this->c.end();
}

const_iterator  MutantStack::begin() const {
    return  this->c.begin();
}

const_iterator  MutantStack::end() const {
    return this->c.end();
}

reverse_iterator    MutantStack::rbegin() {
    return this->rbegin();
}

reverse_iterator    MutantStack::rend() {
    return  this->rend();
}

const_reverse_iterator  MutantStack::rbegin() const {
    return  this->rbegin();
}

const_reverse_iterator  MutantStack::rend() const {
    return  this->rend();
}

#endif