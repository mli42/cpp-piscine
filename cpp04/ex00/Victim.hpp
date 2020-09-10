/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:47:29 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:47:30 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

# include <iostream>
# include <string>

class Victim {
	protected:
		Victim(void);
	public:
		Victim(std::string name);
		Victim(Victim const &src);
		~Victim(void);

		Victim	&operator=(Victim const &rhs);

		std::string		getName(void) const;
		void virtual	getPolymorphed(void) const;
	protected:
		const std::string	_name;
	private:
};

std::ostream	&operator<<(std::ostream &o, Victim const & i);

#endif // ********************************************** VICTIM_CLASS_HPP end //
