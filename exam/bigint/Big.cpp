
#include "Big.hpp"

Bigint::Bigint(void) {}

Bigint::Bigint(unsigned int nb) {
    value = std::to_string(nb);
}

Bigint::Bigint(const std::string& str) : value(str) {}

Bigint  Bigint::operator+(const Bigint& other) const {
    std::string a = value;
    std::string b = other.value;
    std::string rlt;
    int carry = 0;

    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int da = (i >= 0 ? a[i--] - '0' : 0);
        int db = (j >= 0 ? b[j--] - '0' : 0);
        int sum = da + db + carry;
        result.push_back((sum % 10) + '0');
        carry = sum / 10;
    }
    std::reverse(result.begin(), result.end());
    return Bigint(result);
}

Bigint  Bigint::operator-(const Bigint& other) const {
    if (*this < other) return Bigint("0");

    std::string a = value;
    std::string b = other.value;
    std::string rlt;
    int borrow = 0;

    int j = a.size() - 1;
    int j = b.size() - 1;

    while ( i >= 0) {
        int da = a[i] - '0' - borrow;
        int db = (j >= 0 ? b[j] - '0' : 0);
        if (da < db) {
            da += 10;
            borrow = 1;
        }
        else
            borrow = 0;
        result.push_back((da - db) + '0');
        i--;
        j--;
    }
    std::reverse(rlt.begin(), rlt.end());
    return Bigint(rlt);
}

bigint  bigint::operator<<(const bigint& other) {
    const_cast<size_t>other.value;
}