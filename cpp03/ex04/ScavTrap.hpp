#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);

		void		challengeNewcomer(std::string const &target);

	protected:
	private:
};

// std::ostream	&operator<<(std::ostream &o, ScavTrap const & i);

#endif // ******************************************** SCAVTRAP_CLASS_HPP end //
