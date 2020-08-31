#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <iostream>
# include <string>

class ScavTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);

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

		void		challengeNewcomer(std::string const &target);

	private:
		void		SayQuote(std::string quote) const;
};

std::ostream	&operator<<(std::ostream &o, ScavTrap const & i);

#endif // ******************************************** SCAVTRAP_CLASS_HPP end //
