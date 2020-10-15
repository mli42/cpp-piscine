/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:49:00 by mli               #+#    #+#             */
/*   Updated: 2020/10/15 16:28:16 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_CLASS_HPP
# define EASYFIND_CLASS_HPP

# include <iostream>
# include <string>
# include <exception>
# include <algorithm>

# include <map>
# include <vector>
# include <list>
# include <deque>

class EasyFindNotFound : public std::exception {
	virtual const char *what() const throw();
};

const char	*EasyFindNotFound::what() const throw () {
	return ("EasyFindNotFound");
}

template<typename T>
void		easyfind(T const &haystack, int needle)
{
	typename T::const_iterator res;

	res = std::find(haystack.begin(), haystack.end(), needle);
	if (*res != needle)
		throw ::EasyFindNotFound();
}

#endif // ******************************************** EASYFIND_CLASS_HPP end //
