#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &src);
		~NinjaTrap(void);

		NinjaTrap	&operator=(NinjaTrap const &rhs);

		void	ninjaShoebox(FragTrap &trap);
		void	ninjaShoebox(ScavTrap &trap);
		void	ninjaShoebox(NinjaTrap &trap);
		void	ninjaShoebox(ClapTrap &trap);

	protected:
	private:
};

// std::ostream	&operator<<(std::ostream &o, NinjaTrap const & i);

#endif // ******************************************** NINJATRAP_CLASS_HPP end //
