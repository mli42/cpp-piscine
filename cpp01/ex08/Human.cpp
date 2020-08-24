#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
	std::cout << "This melee attack is not effective!" << std::endl;
	(void)target;
}

void Human::rangedAttack(std::string const & target) {
	std::cout << "This ranged attack is very effective!" << std::endl;
	(void)target;
}

void Human::intimidatingShout(std::string const & target) {
	std::cout << target << " is very intimidated" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
	void (Human::*fct[3])(std::string const & target) = {&Human::meleeAttack, \
		&Human::rangedAttack, &Human::intimidatingShout};
	const std::string strattack[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++)
		if (action_name == strattack[i])
		{
			(this->*fct[i])(target);
			return ;
		}
}
