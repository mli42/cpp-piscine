/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 15:20:35 by mli               #+#    #+#             */
/*   Updated: 2020/09/02 16:28:32 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main() {
	Character* me = new Character("ME");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	me->attack(b);
	std::cout << *me;

	me->equip(pf);
	me->attack(b);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;

	me->attack(c);
	me->attack(c);
	me->attack(c);
	me->attack(c);
	std::cout << *me;

	me->recoverAP();
	std::cout << *me;

	return 0;
}


/*

int main() {
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	return 0;
}

*/
