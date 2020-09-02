#ifndef POWERFIST_CLASS_HPP
# define POWERFIST_CLASS_HPP

# include "AWeapon.hpp"
# include <iostream>
# include <string>

class PowerFist : public AWeapon {
	public:
		PowerFist(void);
		PowerFist(PowerFist const &src);
		~PowerFist(void);

		PowerFist		&operator=(PowerFist const &rhs);

		virtual void	attack(void) const;

	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, PowerFist const & i);

#endif // ******************************************* POWERFIST_CLASS_HPP end //
