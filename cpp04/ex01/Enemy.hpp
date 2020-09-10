/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:40 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:41 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

# include <iostream>
# include <string>

class Enemy {
	protected:
		Enemy(void);
	public:
		Enemy(Enemy const &src);
        Enemy(int hp, std::string const & type);
        virtual ~Enemy(void);

		Enemy	&operator=(Enemy const &rhs);

        std::string virtual	getType(void) const;
        int					getHP(void) const;
        virtual void		takeDamage(int hit);

	protected:
		int				_hp;
		std::string		_type;
	private:
};

std::ostream	&operator<<(std::ostream &o, Enemy const & i);

#endif // *********************************************** ENEMY_CLASS_HPP end //
