
#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
	std::cout << "constructor Fixed called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : value(other.value)
{
	std::cout << "copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "copy assignement operator called" << std::endl;
	if (this != &other)
		this->value = other.value;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
