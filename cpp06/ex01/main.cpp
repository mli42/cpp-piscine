/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 16:47:18 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 10:55:33 by mli              ###   ########.fr       */
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

void	*serialize(void)
{
    static const char alphanum[] = \
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ" \
        "abcdefghijklmnopqrstuvwxyz" \
		"0123456789";
	char	*data = new char[sizeof(char) * (8 * 2) + sizeof(int) * 1];
	unsigned short int	i = 0;
	static unsigned short int dorand = 0;

	if (dorand == 0)
	{
		std::srand(std::time(NULL));
		dorand++;
	}

	for (int j = 0; j < 8; j++)
		data[i++] = alphanum[std::rand() % (sizeof(alphanum) - 1)];
	for (int j = 0; j < 4; j++)
		data[i++] = alphanum[std::rand() % 255];
	for (int j = 0; j < 8; j++)
		data[i++] = alphanum[std::rand() % (sizeof(alphanum) - 1)];
	return (data);
}

Data	*deserialize(void *raw)
{
	Data	*deserialized = new Data;

	deserialized->s1 = std::string(static_cast<char *>(raw), 8);
	deserialized->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	deserialized->s2 = std::string(static_cast<char *>(raw) + 8 + 4, 8);
	return (deserialized);
}

void	DisplayData(Data *data)
{
	std::cout << "data->s1: [" << data->s1 << "]" << std::endl;
	std::cout << "data->n: [" << data->n << "]" << std::endl;
	std::cout << "data->s2: [" << data->s2 << "]" << std::endl;
}

int		main(void)
{
	void	*raw;
	Data	*data;

	raw = serialize();
	data = deserialize(raw);

	DisplayData(data);
	delete [] static_cast<char *>(raw);
	delete data;
	return (0);
}
