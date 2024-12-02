#ifndef	FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);

		~Fixed(void);
	
	private:
}

#endif
