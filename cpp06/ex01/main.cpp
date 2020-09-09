/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 16:47:18 by mli               #+#    #+#             */
/*   Updated: 2020/09/09 17:03:47 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
}				t_data;

// const int alea = std::rand() % sizeof(name) / sizeof(*name);

void	*serialize(void)
{
	char	*data = new char[sizeof(char) * (8 * 2) + sizeof(int) * 1];
	int		i = 0;

	return (data);
}

int		main(void)
{
	void	*data;

	std::srand(std::time(NULL));

	data = serialize();

	delete [] reinterpret_cast<char *>(data);
	return (0);
}
