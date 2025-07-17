/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:19:57 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/17 16:16:16 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECT2_HPP
#define VECT2_HPP

#include <iostream>

class   Vect2
{
    public:
        Vect2(void);
        Vect2(int x, int y);
        Vect2(const Vect2& other);
        Vect2   &operator=(const Vect2& other);
        ~Vect2(void);

        int &operator[](int i);
        int operator[](int i) const;

        Vect2   operator++(int);
        Vect2&   operator++();
        Vect2   operator--(int);
        Vect2&   operator--();

        Vect2&  operator+=(const Vect2& other);
        Vect2&  operator-=(const Vect2& other);

        Vect2   operator+(const Vect2& other) const;
        Vect2   operator-(const Vect2& other) const;

        Vect2   operator*(int i) const;
        Vect2   operator*=(int i);

        Vect2  operator-() const;

        bool    operator==(const Vect2& other);
        bool    operator!=(const Vect2& other);
        
        friend  Vect2   operator*(int s, const Vect2& v);
        friend  std::ostream&   operator<<(std::ostream& os, const Vect2& v);
        
    private:
        int _x;
        int _y;
};

#endif