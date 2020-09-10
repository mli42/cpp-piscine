/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:22:57 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 12:22:58 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB(void);

		std::string	name;
		Weapon		*weapon;
		void		attack(void) const;
		void		setWeapon(Weapon &weapon);

	private:
};

#endif // ********************************************** HUMANB_CLASS_HPP end //
