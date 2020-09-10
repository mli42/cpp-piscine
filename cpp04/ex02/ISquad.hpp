/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:48:05 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:48:06 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
