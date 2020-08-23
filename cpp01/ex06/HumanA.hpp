#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		std::string	name;
		Weapon		&weapon;
		void		attack(void) const;

	private:
};

#endif // ********************************************** HUMANA_CLASS_HPP end //
