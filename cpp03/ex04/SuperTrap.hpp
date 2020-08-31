#ifndef SUPERTRAP_CLASS_HPP
# define SUPERTRAP_CLASS_HPP

# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &src);
		~SuperTrap(void);

		SuperTrap	&operator=(SuperTrap const &rhs);
		void		rangedAttack(std::string const &target) const;
		void		meleeAttack(std::string const &target) const;

	protected:
	private:
};

// std::ostream	&operator<<(std::ostream &o, SuperTrap const & i);

#endif // ******************************************** SUPERTRAP_CLASS_HPP end //
