/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:03:22 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/14 18:03:02 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span& other) : _maxSize(other._maxSize), _array(other._array) {}

Span    &Span::operator=(const Span& other){
    if (this != other)
    {
        _maxSize = other._maxSize;
        _array = other._array;
    }
    return *this;
}

Span::~Span(void){}

void    Span::addNumber(int n){
    if (_array.size() >= _maxSize)
        throw std::runtime_error("span is already full !");
    _array.push_back(n);
}

unsigned int Span::shortestSpan() const{
    
}

unsigned int Span::longestSpan() const {
    
}