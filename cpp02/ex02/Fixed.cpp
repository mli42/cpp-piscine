#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
	return ;
}

Fixed::Fixed(const int value) : _value(value << Fixed::_fbits) {
	return ;
}

Fixed::Fixed(const float value) : _value((int)value << Fixed::_fbits) {
	this->_value = roundf(value * (1 << Fixed::_fbits));
}

Fixed::Fixed(Fixed const &src) {
	*this = src;
}

Fixed::~Fixed(void) {
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
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
	return ((float)this->_value / (1 << Fixed::_fbits));
}

int		Fixed::toInt(void) const {
	return (this->_value >> Fixed::_fbits);
}

int		Fixed::operator<(Fixed const &rhs) const {
	return (this->_value < rhs._value ? 1 : 0);
}

int		Fixed::operator<=(Fixed const &rhs) const {
	return (this->_value <= rhs._value ? 1 : 0);
}

int		Fixed::operator>(Fixed const &rhs) const {
	return (this->_value > rhs._value ? 1 : 0);
}

int		Fixed::operator>=(Fixed const &rhs) const {
	return (this->_value >= rhs._value ? 1 : 0);
}

int		Fixed::operator==(Fixed const &rhs) const {
	return (this->_value == rhs._value ? 1 : 0);
}

int		Fixed::operator!=(Fixed const &rhs) const {
	return (this->_value != rhs._value ? 1 : 0);
}

Fixed	Fixed::operator+(const Fixed &rhs) {
	return (Fixed(this->_value + rhs._value));
}

Fixed	Fixed::operator-(const Fixed &rhs) {
	return (Fixed(this->_value - rhs._value));
}

Fixed	Fixed::operator*(const Fixed &rhs) {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) {
	if (rhs._value == 0)
	{
		std::cerr << "Division with 0!" << std::endl;
		return (Fixed(0));
	}
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);

	this->_value++;
	return (tmp);
}

Fixed	&Fixed::operator++() {
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);

	this->_value--;
	return (tmp);
}

Fixed	&Fixed::operator--() {
	this->_value--;
	return (*this);
}

Fixed		&Fixed::min(Fixed &f1, Fixed &f2) {
	return (f1._value > f2._value ? f2 : f1);
}

Fixed		&Fixed::max(Fixed &f1, Fixed &f2) {
	return (f1._value < f2._value ? f2 : f1);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2) {
	return (f1._value > f2._value ? f2 : f1);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2) {
	return (f1._value < f2._value ? f2 : f1);
}

Fixed		&min(Fixed &f1, Fixed &f2) {
	return (Fixed::min(f1, f2));
}

Fixed		&max(Fixed &f1, Fixed &f2) {
	return (Fixed::max(f1, f2));
}

const Fixed	&min(const Fixed &f1, const Fixed &f2) {
	return (Fixed::min(f1, f2));
}

const Fixed	&max(const Fixed &f1, const Fixed &f2) {
	return (Fixed::max(f1, f2));
}
