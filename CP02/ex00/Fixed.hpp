

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed(void);

		const int	getRawBits(void);
		void		setRawBits(int const raw);

	private:

		int			value;
		static const int	bits = 8;
};

#endif

