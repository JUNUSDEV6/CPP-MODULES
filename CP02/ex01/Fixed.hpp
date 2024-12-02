#ifndef FIXED_HPP
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
		~Fixed(void);

		float	toFloat(void) const;
		int	toInt(void) const;
	private:

		int			value;
		static const int	bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
#endif


