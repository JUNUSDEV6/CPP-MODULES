#include "bigint.hpp"
#include <iostream>
#include <ostream>
#include <string>

int main()
{
    const bigint a(42);
    bigint b(21), c, d(1337), e(d);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "(c+= a) = " << (c += a) << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "++b = " << ++b << std::endl;
    std::cout << "b++ = " << b++ << std::endl;
    std::cout << "(b << 10) + 42 = " <<  (b << 10) + 42 << std::endl;
    std::cout << "(d <<= 4) = " << (d <<= 4) << std::endl;
    std::cout << "(d >>= 2) = " << (d >>= 2) << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "a == f = " << (a == f) << std::endl;
    std::cout << "a <= f = " << (a <= f) << std::endl;
    std::cout << "a >= f = " << (a >= f) << std::endl;
    std::cout << "a < f = " << (a < f) << std::endl;
    std::cout << "a > f = " << (a > f) << std::endl;
    std::cout << "(d < a) = " << (d < a) << std::endl;
    std::cout << "(d > a) = " << (d > a) << std::endl;
    std::cout << "(d == a) = " << (d == a) << std::endl;
    std::cout << "(d != a) = " << (d != a) << std::endl;
    std::cout << "(d <= a) = " << (d <= a) << std::endl;
    std::cout << "(d >= a) = " << (d >= a) << std::endl;
}


#include "bigint.hpp"
#include <algorithm>

void bigint::removeLeadingZeros() {
    while (digits.size() > 1 && digits[0] == '0') {
        digits.erase(0, 1);
    }
}

bigint::bigint(int n) {
    digits = std::to_string(n);
}

bigint::bigint(const std::string& s) : digits(s) {
    removeLeadingZeros();
}

bigint bigint::operator+(const bigint& other) const {
    std::string result = "";
    int carry = 0;
    int i = digits.size() - 1;
    int j = other.digits.size() - 1;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += digits[i--] - '0';
        if (j >= 0) sum += other.digits[j--] - '0';
        
        result = char(sum % 10 + '0') + result;
        carry = sum / 10;
    }
    
    return bigint(result);
}

bigint& bigint::operator+=(const bigint& other) {
    *this = *this + other;
    return *this;
}

bigint& bigint::operator++() {
    *this += bigint(1);
    return *this;
}

bigint bigint::operator++(int) {
    bigint temp = *this;
    ++(*this);
    return temp;
}

bigint bigint::operator<<(int shift) const {
    if (digits == "0" || shift <= 0) return *this;
    return bigint(digits + std::string(shift, '0'));
}

bigint bigint::operator>>(int shift) const {
    if (shift <= 0 || digits.size() <= shift) return bigint(0);
    return bigint(digits.substr(0, digits.size() - shift));
}

bigint& bigint::operator<<=(int shift) {
    *this = *this << shift;
    return *this;
}

bigint& bigint::operator>>=(int shift) {
    *this = *this >> shift;
    return *this;
}

bool bigint::operator==(const bigint& other) const {
    return digits == other.digits;
}

bool bigint::operator!=(const bigint& other) const {
    return !(*this == other);
}

bool bigint::operator<(const bigint& other) const {
    if (digits.size() != other.digits.size()) {
        return digits.size() < other.digits.size();
    }
    return digits < other.digits;
}

bool bigint::operator>(const bigint& other) const {
    return other < *this;
}

bool bigint::operator<=(const bigint& other) const {
    return !(*this > other);
}

bool bigint::operator>=(const bigint& other) const {
    return !(*this < other);
}

std::ostream& operator<<(std::ostream& os, const bigint& bi) {
    os << bi.digits;
    return os;
}