#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Constructor Fixed Called" << std::endl;
}

Fixed::Fixed(const int nb) : nb(value)
{
	std::cout << "Constructor const int called" << std::endl;
}

Fixed::Fixed(const float nb) : nb(value)
{
	std::cout << "Constructor float Called" << std::endl;
}
