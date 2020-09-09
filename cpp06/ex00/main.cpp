/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:54:36 by mli               #+#    #+#             */
/*   Updated: 2020/09/09 16:29:25 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	printFloat(float flt, unsigned short int const p) {
	std::cout << "float: " << std::setprecision(p) << std::fixed \
		<< flt << "f" << std::endl;
}

void	printDouble(double d, unsigned short int const p) {
	std::cout << "double: " << std::setprecision(p) << std::fixed \
		<< d << std::endl;
}

void	printInt(double d) {
	long int i = static_cast<long int>(d);

	std::cout << "int: ";
	if (isinf(i) || isnan(i) || i > INT_MAX || i < INT_MIN)
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;
}

void	printChar(const char * const str, double d) {
	const char c = (!isdigit(str[0]) && !str[1] ? str[0] : static_cast<char>(d));

	std::cout << "char: ";
	if (isinf(d) || isnan(d) || d > CHAR_MAX || d < CHAR_MIN)
		std::cout << "impossible";
	else if (!std::isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << std::endl;
}

unsigned short int	getPrecision(char const *str)
{
	while (*str && *str != '.')
		str++;
	if (!str[0] || !isdigit(str[1]))
		return (1);
	int i = 1;
	while (str[i] && isdigit(str[i]))
		i++;
	return (i - 1);
}

void	ft_convert(const char * const str, unsigned short int const precision)
{
	double dbl = std::atof(str);

	printChar(str, dbl);
	printInt(dbl);
	printFloat(static_cast<float>(dbl), precision);
	printDouble(dbl, precision);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Give only one argument." << std::endl;
		return (1);
	}
	ft_convert(argv[1], getPrecision(argv[1]));
	return (0);
}
