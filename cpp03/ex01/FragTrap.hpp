/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:46:04 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:46:05 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include <iostream>
# include <string>

class FragTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &rhs);

		unsigned int	HitPoints;
		unsigned int	MaxHitPoints;
		unsigned int	energy;
		unsigned int	MaxEnergy;
		unsigned int	level;
		std::string		name;
		unsigned int	MeleeDamage;
		unsigned int	RangedDamage;
		unsigned int	ArmorDamageReduction;

		void		rangedAttack(std::string const &target) const;
		void		meleeAttack(std::string const &target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		vaulthunter_dot_exe(std::string const &target);

	private:
		void		SayQuote(std::string quote) const;
};

std::ostream	&operator<<(std::ostream &o, FragTrap const & i);

#endif // ******************************************** FRAGTRAP_CLASS_HPP end //
