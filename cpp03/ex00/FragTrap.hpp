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

		int			HitPoints;
		int			MaxHitPoints;
		int			energy;
		int			MaxEnergy;
		int			level;
		std::string	name;
		int			MeleeDamage;
		int			RangedDamage;
		int			ArmorDamageReduction;

		void		rangedAttack(std::string const &target) const;
		void		meleeAttack(std::string const &target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		vaulthunter_dot_exe(std::string const &target);

	private:
};

std::ostream	&operator<<(std::ostream &o, FragTrap const & i);

#endif // ******************************************** FRAGTRAP_CLASS_HPP end //
