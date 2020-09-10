/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:22:18 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 12:22:19 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string name, std::string type);
		~Zombie(void);

		std::string name;
		std::string type;

		void	advert(void);

	private:
};

#endif // ********************************************** ZOMBIE_CLASS_HPP end //
