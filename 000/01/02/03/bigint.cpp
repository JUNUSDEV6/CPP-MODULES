#include "bigint.hpp"

bigint::bigint() : _nb("0") {}

bigint::bigint(size_t nb) : nb(std::to_string(nb)) {}

bigint::bigint(const std::string& str) : _nb(str) {}

bigint::bigint(const bigint& other) : _nb(other._nb) {}

bigint& bigint::operator=(const bigint& other) {
    if (this != &other)
        _nb = other._nb;
    return *this;
}

bigint::~bigint() {}

bigint  bigint::operator+(const bigint& other) const {
    
    std::string rlt;

    int carry = 0;
    int i = _nb.size() - 1;
    int j = other._nb.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += digits[]
    }    
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