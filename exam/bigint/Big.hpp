/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Big.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:34:56 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/17 18:49:37 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BIGINT_HPP
#define BIGINT_HPP

class   Bigint
{
    public:
        Bigint(void);
        Bigint(unsigned int nb);
        Bigint(const std::string& str);
        Bigint(const Bigint& other) = default;
        Bigint&  operator=(const Bigint& other) = default;

        // Arithmetic
        Bigint  operator+(const Bigint& other) const;
        Bigint  operator-(const Bigint& other) const;
        Bigint& operator+=(const Bigint& other);

        // Increment
        Bigint  operator++();
        Bigint  operator++(int);
        // Digit shifts
        Bigint  operator<<(size_t nb) const;
        Bigint  operator>>(size_t nb) const;
        Bigint&  operator>>=(size_t nb);
        Bigint& operator<<=(size_t nb);
         // Comparison

        bool    operator==(const Bigint& other) const;
        bool    operator!=(const Bigint& other) const;
        bool    operator<=(const Bigint& other) const;
        bool    operator>=(const Bigint& other) const;
        bool    operator>(const Bigint& other) const;
        bool    operator<(const Bigint& other) const;

        friend  std::ostream& operator<<(std::ostream& os, const Bigint bi);

        private:
            std::string value;
            void    remove_leading_zeros();
            bool    is_less(const Bigint& other) const;
};

#endif
