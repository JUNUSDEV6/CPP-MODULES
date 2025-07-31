#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <string>
#include <iostream>
#include <ostream>
#include <cstddef>
#include <algorithm>

class   bigint
{
    public:
        bigint();
        bigint(size_t nb);
        bigint(const std::string& str);
        bigint(const bigint& other);
        ~bigint();

        bigint& operator=(const bigint& other);
        bigint operator+(const bigint& other) const;
        bigint& operator+=(const bigint& other);
        bigint operator-(const bigint& other) const;

        bigint& operator++();
        bigint  operator++(int);

        bigint operator<<(size_t shift);
        bigint& operator<<=(size_t shift);
        bigint& operator>>=(const bigint& other);

        bool    operator==(const bigint& other) const;
        bool    operator<=(const bigint& other) const;
        bool    operator>=(const bigint& other) const;
        bool    operator<(const bigint& other) const;
        bool    operator>(const bigint& other) const;
        bool    operator!=(const bigint& other) const;
        friend  std::ostream&   operator<<(std::ostream& os, const bigint& obj);

    private:
        std::string num;
};


#endif