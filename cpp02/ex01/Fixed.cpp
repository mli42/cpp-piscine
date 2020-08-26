#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value << Fixed::_fbits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value((int)value << Fixed::_fbits) {
	std::cout << "Float constructor called" << std::endl;
	int		i = 0;
	float	remaindr = value - (int)value;
	int		pointbitshift;

	while (++i < Fixed::_fbits)
	{
		pointbitshift = 1 << i;
		if (remaindr < (1.0 / pointbitshift))
			continue ;
		remaindr -= (1.0 / pointbitshift);
		this->_value |= pointbitshift;
	}
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_value = rhs.getRawBits();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i) {
	o << i.toFloat();
	return (o);
}

int		Fixed::getRawBits(void) const {
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

const int Fixed::_fbits = 8;

float	Fixed::toFloat(void) const {
	int		fpart = ((char *)&this->_value)[0];
	float	point;
	int		i = Fixed::_fbits;

	point = 0;
	while (i > 0)
	{
		if ((fpart >> i) & 1)
			point += 1.0 / (1 << i);
		i--;
	}
	return (this->toInt() + point);
}

int		Fixed::toInt(void) const {
	return (this->_value >> Fixed::_fbits);
}
