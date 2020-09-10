/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:55 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:57 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_HPP
# define SUPERMUTANT_CLASS_HPP

# include "Enemy.hpp"
# include <iostream>
# include <string>

class SuperMutant : public Enemy {
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const &src);
		virtual ~SuperMutant(void);

		SuperMutant	&operator=(SuperMutant const &rhs);

		virtual void	takeDamage(int hit);
	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, SuperMutant const & i);

#endif // ***************************************** SUPERMUTANT_CLASS_HPP end //
