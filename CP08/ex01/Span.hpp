/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:05:50 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/15 18:00:43 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <climits>

class   Span
{
    public:
        Span (unsigned int n);
        Span (const Span& other);
        Span &operator=(const Span& other);
        ~Span(void);

        void    addNumber(int n);
        int     shortestSpan() const;
        int     longestSpan() const;

    private:
        std::vector<int>    _array;
        unsigned int        _maxSize;
};

#endif