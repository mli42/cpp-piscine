/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:22 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:23 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(Cure const &src);
		virtual ~Cure(void);

		Cure	&operator=(Cure const &rhs);

		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, Cure const & i);

#endif // ************************************************ CURE_CLASS_HPP end //
