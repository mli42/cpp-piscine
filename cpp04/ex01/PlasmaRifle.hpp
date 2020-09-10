/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:44 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:45 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_HPP
# define PLASMARIFLE_CLASS_HPP

# include "AWeapon.hpp"
# include <iostream>
# include <string>

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &src);
		~PlasmaRifle(void);

		PlasmaRifle		&operator=(PlasmaRifle const &rhs);
		virtual void	attack(void) const;

	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, PlasmaRifle const & i);

#endif // ***************************************** PLASMARIFLE_CLASS_HPP end //
