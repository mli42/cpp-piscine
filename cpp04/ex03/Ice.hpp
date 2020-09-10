/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:30 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:34 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(Ice const &src);
		virtual ~Ice(void);

		Ice	&operator=(Ice const &rhs);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, Ice const & i);

#endif // ************************************************* ICE_CLASS_HPP end //
