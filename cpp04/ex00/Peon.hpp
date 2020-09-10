/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:22 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:23 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>

class Peon : public Victim {
	public:
		Peon(void);
		Peon(std::string name);
		Peon(Peon const &src);
		~Peon(void);

		Peon			&operator=(Peon const &rhs);
		void virtual	getPolymorphed(void) const;

	protected:
	private:
};

// std::ostream	&operator<<(std::ostream &o, Peon const & i);

#endif // ************************************************ PEON_CLASS_HPP end //
