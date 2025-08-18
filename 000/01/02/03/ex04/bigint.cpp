#include "bigint.hpp"

void    bigint::removeLaodingZero() {
    while (_nb.size() > 1 && _nb[0] == '0')
        _nb.erase(0,1);
}

bigint::bigint() : _nb("0") {}

bigint::bigint(size_t nb) : _nb(std::to_string(nb)) {}

bigint::bigint(const std::string& str) : _nb(str) {removeLaodingZero();}

bigint::bigint(const bigint& other) : _nb(other._nb) {}

bigint& bigint::operator=(const bigint& other) {
    if (this != &other)
        _nb = other._nb;
    return *this;
}

bigint::~bigint() {}

bigint  bigint::operator+(const bigint& other) const {
    std::string rlt;
    int carry = 0, i = _nb.size() - 1, j = other._nb.size() -1;
    while (carry || i >= 0 || j >= 0){
        int sum = carry;
        if (i >= 0) sum += _nb[i--] - '0';
        if (j >= 0) sum += other._nb[j--] - '0';
        rlt = char(sum % 10 + '0') + rlt;
        carry = sum / 10;
    }
    return bigint(rlt);
}

bigint& bigint::operator+=(const bigint& other) {
    _nb = _nb + other._nb;
    return *this;
}

bigint& bigint::operator++() {
    *this += bigint(1);
    return *this;
}

bigint bigint::operator++(int) {
    bigint tmp(_nb);
    *this += bigint(1);
    return tmp;
}

bigint  bigint::operator<<(size_t shift) const{
    if (_nb == "0" || shift <= 0) return *this;
    return bigint(_nb + std::string(shift, '0'));
}

bigint  bigint::operator>>(size_t shift) const {
    if (shift <= 0 || _nb.size() <= shift) return bigint(0);
    return bigint(_nb.substr(0, _nb.size() - shift));
}

bigint& bigint::operator<<=(size_t shift){
    *this = *this << shift;
    return *this;
}

bigint& bigint::operator>>=(size_t shift) {
    *this = *this >> shift;
    return *this;
}

bool    bigint::operator==(const bigint& other) const {
    return _nb == other._nb;
}

bool    bigint::operator!=(const bigint& other) const {
    return !(*this == other);
}

bool    bigint::operator<(const bigint& other) const {
    if (_nb.size() != other._nb.size())
        return _nb.size() < other._nb.size();
    return _nb < other._nb;
}

bool    bigint::operator>(const bigint& other) const {
    return other < *this;
}

bool    bigint::operator<=(const bigint& other) const {
    return !(*this > other);
}

bool    bigint::operator>=(const bigint& other) const {
    return !(*this < other);
}

std::ostream&   operator<<(std::ostream& os, const bigint& other) {
    os << other._nb;
    return os;
}