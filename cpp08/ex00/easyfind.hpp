/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:49:00 by mli               #+#    #+#             */
/*   Updated: 2020/09/11 16:31:09 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_CLASS_HPP
# define EASYFIND_CLASS_HPP

# include <iostream>
# include <string>

# include <map>
# include <vector>
# include <list>
# include <deque>

template<typename T>
int		easyfind(T const &haystack, int needle)
{
	typename T::const_iterator it;
	typename T::const_iterator ite = haystack.end();

	for (it = haystack.begin(); it != ite; it++)
		if (*it == needle)
			return (1);
	return (0);
}

#endif // ******************************************** EASYFIND_CLASS_HPP end //
