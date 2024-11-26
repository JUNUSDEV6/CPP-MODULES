

#ifndef FIXED_HPP
# define FIXED_HPP
# define <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed(void);

	private:

		int			fixed-point;
		static const int	bits = 8;
}

#endif

