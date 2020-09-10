/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:22:29 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 12:22:30 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_CLASS_HPP
# define ZOMBIEHORDE_CLASS_HPP

#include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);

		void	announce(void);

		Zombie		*Horde;
		static void	randomAttributes(Zombie &nZombie);

	private:
		const int	nbHorde;
};

#endif // ***************************************** ZOMBIEHORDE_CLASS_HPP end //
