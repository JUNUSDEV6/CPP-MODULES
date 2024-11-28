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
		
		const int	getRawbits(void);
		void		setRawbits(int const raw);
	private:

		int			value;
		static const int	bits;
};
