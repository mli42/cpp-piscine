/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:01:51 by mli               #+#    #+#             */
/*   Updated: 2020/10/13 12:19:15 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

static void	ft_dorand(void)
{
	static unsigned short int dorand = 0;

	if (dorand)
		return ;
	dorand++;
	std::srand(::time(NULL));
}

Base	*generate(void)
{
	ft_dorand();
	const unsigned short int alea = std::rand() % 3;

	if (alea == 0)
		return (new A);
	else if (alea == 1)
		return (new B);
	else
		return (new C);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	std::string res = "";
	try
	{
		static_cast<void>(dynamic_cast<A &>(p));
		res += "A";
	}
	catch (std::bad_cast &bc)
	{
		try
		{
			static_cast<void>(dynamic_cast<B &>(p));
			res += "B";
		}
		catch (std::bad_cast &bc)
		{
			res += "C";
		}
	}
	std::cout << res << std::endl;
}

int		main(void)
{
	Base *hey;

	hey = generate();

	identify_from_pointer(hey);
	identify_from_reference(*hey);

	delete hey;

	std::cout << "###############################################" << std::endl;
	A a;
	identify_from_pointer(&a);
	identify_from_reference(a);

	std::cout << "###############################################" << std::endl;
	B b;
	identify_from_pointer(&b);
	identify_from_reference(b);

	std::cout << "###############################################" << std::endl;
	C c;
	identify_from_pointer(&c);
	identify_from_reference(c);

	return (0);
}
