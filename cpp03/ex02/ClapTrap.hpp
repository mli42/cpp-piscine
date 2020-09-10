/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:46:11 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:46:11 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>
# include <string>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(unsigned int HitPoints, unsigned int MaxHitPoints, \
			unsigned int energy, unsigned int MaxEnergy, unsigned int level, \
			std::string  name, unsigned int MeleeDamage, unsigned int RangedDamage, \
			unsigned int ArmorDamageReduction, std::string const type);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &rhs);

		unsigned int	HitPoints;
		unsigned int	MaxHitPoints;
		unsigned int	energy;
		unsigned int	MaxEnergy;
		unsigned int	level;
		std::string		name;
		unsigned int	MeleeDamage;
		unsigned int	RangedDamage;
		unsigned int	ArmorDamageReduction;
		std::string const	type;

		void		rangedAttack(std::string const &target) const;
		void		meleeAttack(std::string const &target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		void		SayQuote(std::string quote) const;
		void		SayConstructorQuote(void) const;
		void		SayDestructorQuote(void) const;
		void		SayRangedAttQuote(void) const;
		void		SayMeleeAttQuote(void) const;
		void		SayTakeDamageQuote(void) const;
		void		SayBeRepairedQuote(void) const;
		static std::string const	GetRandQuote(const std::string *quotes, \
				const unsigned int arraysize);
	private:
		static int	randinit;
};

std::ostream	&operator<<(std::ostream &o, ClapTrap const & i);

#endif // ******************************************** CLAPTRAP_CLASS_HPP end //
