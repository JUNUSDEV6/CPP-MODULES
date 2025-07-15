/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:05:08 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/15 20:11:52 by yohanafi         ###   ########.fr       */
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

#endif