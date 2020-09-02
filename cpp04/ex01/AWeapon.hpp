#ifndef AWEAPON_CLASS_HPP
# define AWEAPON_CLASS_HPP

# include <iostream>
# include <string>

class AWeapon {
	protected:
		AWeapon(void);
	public:
        AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &src);
        virtual ~AWeapon(void);

        std::string virtual	getName(void) const;
        int					getAPCost(void) const;
        int					getDamage(void) const;

        virtual void attack(void) const = 0;

		AWeapon	&operator=(AWeapon const &rhs);

	protected:
		std::string		_name;
		int				_apcost;
		int				_damage;
	private:
};

std::ostream	&operator<<(std::ostream &o, AWeapon const & i);

#endif // ********************************************* AWEAPON_CLASS_HPP end //
