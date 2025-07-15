/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:03:22 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/15 17:06:05 by yohanafi         ###   ########.fr       */
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

int Span::shortestSpan() const{
    if (_array.size() < 2)
        throw std::runtime_error("not enough, only one element");

        std::vector<int>    array2 = _array;
        std::sort(array2.begin(), array2.end());

        int minSpan = INT_MAX;
        for (int i = 0; i < array2.size() - 1; i++){
            int span = array2[i + 1] - array2[i];
            if (span < minSpan)
                minSpan = span
        }
        return minSpan;
}

int Span::longestSpan() const {
    if (_array.size() < 2)
        throw std::runtime_error("not enough, only one element");
    
    int minValue = *std::min_element(_array.begin(), _array.end());
    int maxValue = *std::max_element(_array.begin(), _array.end());

    return minValue - maxValue;
}
