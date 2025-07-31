#include "bigint.hpp"

bigint::bigint() : num("0") {}

bigint::bigint(size_t nb) : num(std::to_string(nb)) {}

bigint::bigint(const std::string& str) : num(str) {}

bigint::bigint(const bigint& other) {
    num = other.num;
}

bigint& bigint::operator=(const bigint& other) {
    if (this != &other)
        num = other.num;
    return *this;
}

bigint::~bigint() {}

std::string add_strings(const std::string& n1, const std::string& n2) {
    
    std::string rlt;
    int carry = 0, i = n1.size() - 1, j = n2.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int sum = (i >= 0 ? n1[i--] - '0' : 0) + (j >= 0 ? n2[j--] - '0' : 0) + carry;
        rlt.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    std::reverse(rlt.begin(), rlt.end());
    return rlt;
}

bigint  bigint::operator+(const bigint& other) {
    return bigint(add_strings(num, other.num));
}

bigint& bigint::operator+=(const bigint& other) {
    num += other.num;
    return *this;
}

bigint  bigint::operator-(const bigint& other) {
    (void)other;
    return bigint();
}

bigint& bigint::operator++() {
    return *this += bigint(1);
}

bigint  bigint::operator++(int) {
    bigint  tmp(*this)
    ++*this;
    return tmp;
}

bigint  bigint::operator<<(size_t shift) {
    return  bigint(num + std::string(shift + '0'));
}

bigint& bigint::operator<<=(size_t shift) {
    return  num += std::string(shift + '0');
}

bigint& bigint::operator>>=(const bigint& other) {
    
}