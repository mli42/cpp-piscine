/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:22:36 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 12:22:37 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain {
	public:
		Brain(void);
		~Brain(void);

		int weight;
		int nbNeurons;

		std::string identify(void) const;

	private:
};

#endif // *********************************************** BRAIN_CLASS_HPP end //
