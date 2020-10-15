/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 15:49:00 by mli               #+#    #+#             */
/*   Updated: 2020/10/15 19:17:15 by mli              ###   ########.fr       */
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
bool	easyfind(T const &haystack, int needle)
{
	if (*std::find(haystack.begin(), haystack.end(), needle) == needle)
		return (true);
	return (false);
}

#endif // ******************************************** EASYFIND_CLASS_HPP end //
