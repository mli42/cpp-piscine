/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:51 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:51 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_CLASS_HPP
# define RADSCORPION_CLASS_HPP

# include "Enemy.hpp"
# include <iostream>
# include <string>

class RadScorpion : public Enemy {
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const &src);
		virtual ~RadScorpion(void);

		RadScorpion	&operator=(RadScorpion const &rhs);
	protected:
	private:
};

std::ostream	&operator<<(std::ostream &o, RadScorpion const & i);

#endif // ***************************************** RADSCORPION_CLASS_HPP end //
