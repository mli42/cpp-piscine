#ifndef TACTICALMARINE_CLASS_HPP
# define TACTICALMARINE_CLASS_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &src);
		virtual ~TacticalMarine(void);

		TacticalMarine	&operator=(TacticalMarine const &rhs);

		virtual ISpaceMarine	*clone(void) const;
		virtual void			battleCry(void) const;
		virtual void			rangedAttack(void) const;
		virtual void			meleeAttack(void) const;
	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, TacticalMarine const & i);

#endif // ************************************** TACTICALMARINE_CLASS_HPP end //
