/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:02:21 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/17 16:33:10 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vect2.hpp"

Vect2::Vect2(void) :_x(0), _y(0) {}

Vect2::Vect2(int x, int y) : _x(x) , _y(y) {}

Vect2::Vect2(const Vect2& other) : _x(other._x), _y(other._y) {}

Vect2&   Vect2::operator=(const Vect2& other) {
    if (*this != other)
    {
        _x = other._x;
        _y = other._y;
    }
    return *this;
}

Vect2::~Vect2(void) {}

int& Vect2::operator[](int i) {
    return (i == 0 ? _x : _y);
}

int Vect2::operator[](int i) const {
    return (i == 0 ? _x : _y);
}

Vect2   Vect2::operator++(int) {
    Vect2 tmp = *this;
    _x++;
    _y++;
    return tmp;
}

Vect2   &Vect2::operator++() {
    _x++;
    _y++;
    return *this;
}

Vect2   Vect2::operator--(int) {
    Vect2 tmp = *this;
    _x--;
    _y--;
    return *this;
}

Vect2   &Vect2::operator--() {
    _x--;
    _y--;
    return *this;
}

Vect2&  Vect2::operator+=(const Vect2& other) {
    _x += other._x;
    _y += other._y;
    return *this;
}

Vect2&  Vect2::operator-=(const Vect2& other){
    _x -= other._x;
    _y -= other._y;
    return *this;
}

Vect2   Vect2::operator+(const Vect2& other) const {
    return Vect2(_x + other._x, _y + other._y);
}

Vect2   Vect2::operator-(const Vect2& other) const {
    return  Vect2(_x - other._x, _y - other._y);
}

Vect2   Vect2::operator*(int i) const {
    return Vect2(_x * i, _y * i);
}

Vect2   Vect2::operator*=(int i) {
    _x *= i;
    _y *= i;
    return *this;
}

Vect2  Vect2::operator-() const{
    return Vect2(-_x, -_y);
}

bool    Vect2::operator==(const Vect2& other) {
    return (_x == other._x && _y == other._y);
}

bool    Vect2::operator!=(const Vect2& other) {
    return !(*this == other);
}

Vect2   operator*(int s, const Vect2& v) {
    return Vect2(v._x * s, v._y * s);
}

std::ostream&   operator<<(std::ostream& os, const Vect2& v) {
    os << "{" << v[0] << ", " << v[1] << "}";
    return os;
}