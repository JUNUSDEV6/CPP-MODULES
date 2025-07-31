#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <cstddef>
#include <iostream>
#include <ostream>
#include <algorithm>
#include <string>

class   bigint
{
    public:
        bigint();
        bigint(size_t nb);
        bigint(const bigint& other);
        bigint(const std::string& nb);
        bigint& operator=(const bigint& other);
        ~bigint();

        bigint operator+(const bigint& other) const;
        bigint& operator+=(const bigint& other);
        bigint operator-(const bigint& other) const;
        bigint&  operator++();
        bigint operator++(int);

        bigint operator<<(size_t shift) const;
        bigint& operator<<=(size_t shift);
        bigint& operator>>=(const bigint& other);

        bool    operator==(const bigint& other) const;
        bool    operator<=(const bigint& other) const;
        bool    operator>=(const bigint& other) const;
        bool    operator>(const bigint& other) const;
        bool    operator<(const bigint& other) const;
        bool    operator!=(const bigint& other) const;

        friend  std::ostream& operator<<(std::ostream& os, const bigint& other);
        
        
        private:
        std::string num;
        
};
    


#endif