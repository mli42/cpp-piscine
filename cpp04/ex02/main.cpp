/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:55:16 by mli               #+#    #+#             */
/*   Updated: 2020/09/04 15:25:03 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	Squad *vlc = new Squad;
	vlc->push(NULL);
	vlc->push(bob);
	vlc->push(jim);
std::cout<< "\t0 START:" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
std::cout<< "\t0 END\n" << std::endl;

	ISpaceMarine	*A = new TacticalMarine;
	ISpaceMarine	*B = new TacticalMarine;
	ISpaceMarine	*C = new AssaultTerminator;
	Squad			*MyCrew = new Squad;
	MyCrew->push(NULL);
	MyCrew->push(A);
	MyCrew->push(B);
	MyCrew->push(NULL);
	MyCrew->push(A);
	MyCrew->push(C);
	MyCrew->push(NULL);
	MyCrew->push(A);

	std::cout << "MyCrew has many ships: " << MyCrew->getCount() << std::endl; 
std::cout<< "\t1 START:" << std::endl;
	for (int i = 0; i < MyCrew->getCount(); ++i)
	{
		ISpaceMarine* cur = MyCrew->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
std::cout<< "\t1 END\n" << std::endl;

	*MyCrew = *vlc;
	std::cout << "MyCrew has new members: " << MyCrew->getCount() << std::endl; 
std::cout<< "\t2 START:" << std::endl;
	for (int i = 0; i < MyCrew->getCount(); ++i)
	{
		ISpaceMarine* cur = MyCrew->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
std::cout<< "\t2 END" << std::endl;

	return (0);
}

/*
int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return (0);
}*/
