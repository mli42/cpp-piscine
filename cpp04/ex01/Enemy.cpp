#include "Enemy.hpp"

Enemy::Enemy(void) {
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : \
		_hp(hp), _type(type) {
	;
}

Enemy::Enemy(Enemy const &src) {
	*this = src;
}

Enemy::~Enemy(void) {
	return ;
}

Enemy	&Enemy::operator=(Enemy const &rhs) {
	if (this == &rhs)
		return (*this);
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Enemy const &i) {
	(void)i;
//	o << i.;
	return (o);
}

std::string		Enemy::getType(void) const { return (this->_type); }
int				Enemy::getHP(void) const { return (this->_hp); }

void			Enemy::takeDamage(int hit) {
	if (hit >= 0)
		this->_hp -= hit;
}
