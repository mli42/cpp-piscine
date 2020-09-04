#ifndef ISPACEMARINE_CLASS_HPP
# define ISPACEMARINE_CLASS_HPP

# include <iostream>
# include <string>

class ISpaceMarine {
	public:
		virtual ~ISpaceMarine(void) {}
		virtual ISpaceMarine* clone(void) const = 0;
		virtual void battleCry(void) const = 0;
		virtual void rangedAttack(void) const = 0;
		virtual void meleeAttack(void) const = 0;

	protected:
	private:
};

#endif // **************************************** ISPACEMARINE_CLASS_HPP end //
