#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &rhs);

		void		vaulthunter_dot_exe(std::string const &target);

	protected:
	private:
};

// std::ostream	&operator<<(std::ostream &o, FragTrap const & i);

#endif // ******************************************** FRAGTRAP_CLASS_HPP end //
