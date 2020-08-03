/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:32:55 by mli               #+#    #+#             */
/*   Updated: 2020/08/03 22:36:14 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

#include <string>

class Pony {
	public:
		Pony(int age, int nbLegs, bool freckles, std::string name);
		~Pony(void);

		int			age;
		int			nbLegs;
		bool const	freckles;
		std::string	name;

	private:
};

#endif // ************************************************ PONY_CLASS_HPP end //
