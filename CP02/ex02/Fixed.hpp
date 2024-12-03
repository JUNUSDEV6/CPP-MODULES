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
		Fixed&	operator=(const Fixed& other);
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		Fixed	operator+(const Fixed& other);
		Fixed	operator-(const Fixed& other);
		Fixed	operator*(const Fixed& other);
		Fixed	operator/(const Fixed& other);
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static Fixed	&min(Fixed& a, Fixed& b);
		static Fixed	&min(const Fixed& a, const Fixed& b);
		static Fixed	&max(Fixed& a, Fixed& b);
		static Fixed	&max(const Fixed& a, const Fixed& b);
		~Fixed(void);
		
		const int	getRawBits(void);
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int		toInt(void) const;
	
	private:

		int			value;
		static const int	bits = 8;
}

#endif
