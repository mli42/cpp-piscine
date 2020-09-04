#ifndef ISQUAD_CLASS_HPP
# define ISQUAD_CLASS_HPP

# include "ISpaceMarine.hpp"

class ISquad {
	public:
		virtual ~ISquad(void) {}
		virtual int getCount(void) const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
	protected:
	private:
};

#endif // ********************************************** ISQUAD_CLASS_HPP end //
