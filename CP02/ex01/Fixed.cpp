#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
	std::cout << "Constructor Fixed Called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	value = nb << bits;
}

Fixed::Fixed(const float nb)
{
	value = static_cast<int>(roundf(nb * (1 << bits)));	
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		 this->value = other.value;
	return *this;
}
Fixed::Fixed(const Fixed &other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawbits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(value) / (1 << bits);
}

int Fixed::toInt(void) const
{
	return value >> bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return out;
}


