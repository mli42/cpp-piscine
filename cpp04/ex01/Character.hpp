#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>
# include <string>

class Character {
	protected:
		Character(void);
	public:
		Character(Character const &src);
		Character(std::string const &name);
		virtual ~Character(void);

		Character	&operator=(Character const &rhs);

        void			recoverAP(void);
        void			equip(AWeapon *weapon);
        void			attack(Enemy *enemy);
        std::string		getName(void) const;
		int				getAPCount(void) const;
		AWeapon const	*getWeapon(void) const;
	protected:
		std::string		_name;
		int				_apcount;
		AWeapon			*_cweapon;
	private:
};

std::ostream	&operator<<(std::ostream &o, Character const & i);

#endif // ******************************************* CHARACTER_CLASS_HPP end //
