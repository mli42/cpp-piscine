/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 10:31:49 by mli               #+#    #+#             */
/*   Updated: 2020/08/24 14:51:16 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	targetfile(const char * const str)
{
	std::string res = "";

	for (int i = 0; str[i]; i++)
		res += toupper(str[i]);
	res += ".replace";
	return (res);
}

void		ft_goodline(std::string line, std::string &tmp, \
					const char * const s1, const char * const s2)
{
	unsigned long int	i = 0;
	unsigned int		linelen = line.length();
	const static int	lens1 = strlen(s1);

	while (i < linelen)
	{
		if (line.find(s1, i, lens1) == i)
		{
			i += lens1;
			tmp += s2;
		}
		else
			tmp += line[i++];
	}
}

void		ft_replace(const char * const filename, \
								const char * const s1, const char * const s2)
{
	std::ifstream	ifs(filename);
	std::ofstream	ofs(targetfile(filename));
	std::string		line;
	std::string		tmp;

	if (!ifs.is_open() || !ofs.is_open())
		return ;

	while (getline(ifs, line))
	{
		tmp.clear();
		ft_goodline(line, tmp, s1, s2);
		ofs << tmp << std::endl;
	}
	ifs.close();
	ofs.close();
}

int		main(int argc, char **argv)
{
	if (argc == 4 && argv[1][0] && argv[2][0] && argv[3][0])
		ft_replace(argv[1], argv[2], argv[3]);
	else
		std::cout << "Please give me 3 non-empty arguments" << std::endl;
	return (0);
}
