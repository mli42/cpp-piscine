#include "FragTrap.hpp"

FragTrap::FragTrap(void) : HitPoints(100), MaxHitPoints(100), energy(100), \
	MaxEnergy(100), level(1), MeleeDamage(30), RangedDamage(20), \
	ArmorDamageReduction(5) {
	std::srand(std::time(NULL));
	std::cout << "Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : HitPoints(100), MaxHitPoints(100), \
	energy(100), MaxEnergy(100), level(1), name(name), MeleeDamage(30), \
	RangedDamage(20), ArmorDamageReduction(5) {
	std::srand(std::time(NULL));
	const static std::string quotes[] = {"Check me out!", \
	"Now I will dominate!", "I'm so sexy!", "Hahahahaha! I'm alive!", \
	"Back for more!", "Here we go again!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	std::cout << "Constructor of FragTrap called" << std::endl;
	this->SayQuote(quote);
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
}

FragTrap::~FragTrap(void) {
	const static std::string quotes[] = {"I'll die the way I lived: annoying!" \
	,"You can't kill me!", "I'm too pretty to die!", "Robot down!", \
	"No, nononono NO!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	std::cout << "Destructor of FragTrap called" << std::endl;
	this->SayQuote(quote);
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	if (this != &rhs)
	{
		this->HitPoints = rhs.HitPoints;
		this->MaxHitPoints = rhs.MaxHitPoints;
		this->energy = rhs.energy;
		this->MaxEnergy = rhs.MaxEnergy;
		this->level = rhs.level;
		this->name = rhs.name;
		this->MeleeDamage = rhs.MeleeDamage;
		this->RangedDamage = rhs.RangedDamage;
		this->ArmorDamageReduction = rhs.ArmorDamageReduction;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &i) {
	(void)i;
//	o << i.;
	return (o);
}

void	FragTrap::rangedAttack(std::string const &target) const {
	const static std::string quotes[] = {"I'm a tornado of death and bullets!", \
	"Sniped!", "Chk-chk, BOOM!", "Get ready for some Fragtrap face time!", \
	"In yo' FACE!", "I expect you to die!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	this->SayQuote(quote);
	std::cout << "FR4G-TP (" << this->name << "): attacks " << target \
	<< " at range, causing " << this->RangedDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) const {
	const static std::string quotes[] = {"This is why you do your homework!", \
	"Pain school is now in session.", "Guess who?", "Meet professor punch!", \
	"Ready for the PUNCHline?!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	this->SayQuote(quote);
	std::cout << "FR4G-TP (" << this->name << "): attacks " << target \
	<< " , causing " << this->MeleeDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	const static std::string quotes[] = {"Why do I even feel pain?!", \
	"Why did they build me out of galvanized flesh?!", "Ow hohoho, that hurts! Yipes!", \
	"My robotic flesh! AAHH!", "Yikes! Ohhoho!", "Woah! Oh! Jeez!", \
	"If only my chassis... weren't made of recycled human body parts! Wahahaha!"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	if (amount > this->ArmorDamageReduction)
		amount -= this->ArmorDamageReduction;
	else
		amount = 0;
	if (this->HitPoints >= amount)
		this->HitPoints -= amount;
	else
		this->HitPoints = 0;
	this->SayQuote(quote);
	std::cout << "FR4G-TP (" << this->name << ") is injured! \e[1;91mHis HP: " \
		<< this->HitPoints << "\e[m" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	const static std::string quotes[] = {"Make my day.", \
		"Gimme your best shot.", "Hit me, baby!", "Ya feeling lucky, punk?"};
	const int	alea = std::rand() % sizeof(quotes) / sizeof(*quotes);
	const std::string quote = quotes[alea];

	if (this->HitPoints + amount > this->MaxHitPoints)
		this->HitPoints = this->MaxHitPoints;
	else
		this->HitPoints += amount;
	if (this->energy + amount > this->MaxEnergy)
		this->energy = this->MaxEnergy;
	else
		this->energy += amount;
	this->SayQuote(quote);
	std::cout << "Life and Energy have been restored \e[1;92m(+" << amount \
		<< ")\e[m" << std::endl;
	std::cout << "FR4G-TP (" << this->name << ") \e[1;92mHP: " \
	<< this->HitPoints << " Energy: " << this->energy << "\e[m" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	const static int AttackCost = 25;
	const static std::string attacks[] = {"farts on", "points his gun on", \
		"sings with his *best* voice for", "cooked a poisoned meal for", \
		"points his gun on"};
	const int	alea = std::rand() % sizeof(attacks) / sizeof(*attacks);
	const std::string attack = attacks[alea];

	if (this->energy >= AttackCost)
	{
		std::cout << "FR4G-TP (" << this->name << ") " << attack << " " \
			<< target << " and it's unexepectedly very effective..." \
			<< std::endl;
		this->energy -= AttackCost;
	}
	else
		std::cout << "\e[1;91mSbir! I ran out of energy! Need " \
			<< AttackCost - this->energy << " more...\e[m" << std::endl;
}

void	FragTrap::SayQuote(std::string quote) const {
	std::cout << this->name << ": \e[1;93m\"" << quote << "\"\e[m" << std::endl;
}
