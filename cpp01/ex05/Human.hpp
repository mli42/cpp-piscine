/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:22:40 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 12:22:41 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP

# include "Brain.hpp"
# include <iostream>
# include <string>

class Human {
	public:
		Human(void);
		~Human(void);

		std::string	identify(void) const;
		const Brain	&getBrain(void) const;

	private:
		const Brain _Brain;
};

#endif // *********************************************** HUMAN_CLASS_HPP end //
