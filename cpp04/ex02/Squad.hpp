/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:09 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:09 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_HPP
# define SQUAD_CLASS_HPP

# include "ISquad.hpp"
# include <iostream>
# include <string>

typedef struct	s_squad
{
	ISpaceMarine	*marine;
	struct s_squad	*next;
}				t_squad;

class Squad : public ISquad {
	public:
		Squad(void);
		Squad(Squad const &src);
		virtual ~Squad(void);

		Squad	&operator=(Squad const &rhs);

		virtual int				getCount(void) const;
		virtual ISpaceMarine	*getUnit(int nb) const;
		virtual int				push(ISpaceMarine *marine);
	protected:
		t_squad	*_tsquad;
		int		_SquadCount;
		t_squad	*newMember(ISpaceMarine *marine);
		void	SquadClean(void);
	private:
};

std::ostream	&operator<<(std::ostream &o, Squad const & i);

#endif // *********************************************** SQUAD_CLASS_HPP end //
