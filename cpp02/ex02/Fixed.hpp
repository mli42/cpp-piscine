#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed	&operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		int		operator<(Fixed const &rhs) const;
		int		operator<=(Fixed const &rhs) const;
		int		operator>(Fixed const &rhs) const;
		int		operator>=(Fixed const &rhs) const;
		int		operator==(Fixed const &rhs) const;
		int		operator!=(Fixed const &rhs) const;

		Fixed	operator+(const Fixed &rhs);
		Fixed	operator-(const Fixed &rhs);
		Fixed	operator*(const Fixed &rhs);
		Fixed	operator/(const Fixed &rhs);

		Fixed	operator++(int);
		Fixed	&operator++();
		Fixed	operator--(int);
		Fixed	&operator--();

		static Fixed		&min(Fixed &f1, Fixed &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
		static const Fixed	&min(const Fixed &f1, const Fixed &f2);
		static const Fixed	&max(const Fixed &f1, const Fixed &f2);

	private:
		int					_value;
		static const int	_fbits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const & i);

Fixed		&min(Fixed &f1, Fixed &f2);
Fixed		&max(Fixed &f1, Fixed &f2);
const Fixed	&min(const Fixed &f1, const Fixed &f2);
const Fixed	&max(const Fixed &f1, const Fixed &f2);


#endif // *********************************************** FIXED_CLASS_HPP end //
