/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:05:50 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/14 17:24:31 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class   Span
{
    public:
        Span (unsigned int n);
        Span (const Span& other);
        Span &operator=(const Span& other);
        ~Span(void);

        void            addNumber(int n);
        unsigned int    shortestSpan() const;
        unsigned int    longestSpan() const;

    private:
        std::vector<int>    _array;
        unsigned int        _maxSize;
};

#endif