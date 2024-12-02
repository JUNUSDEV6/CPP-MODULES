#include "Fixed.hpp"

Fixed::Fixed(void) : value(0);
{
	std::cout << "Constructor Fixed Called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	value = nb << bits;
}

Fixed::Fixed(const float nb)
{
	value = static_cast<int>(roundf(value * (1 << value)));	
}

Fixed& Fixed::operator=(const Fixed& other)
{
	
}

