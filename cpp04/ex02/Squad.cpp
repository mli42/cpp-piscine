#include "Squad.hpp"

Squad::Squad(void) : _tsquad(NULL), _SquadCount(0) {
	return ;
}

Squad::Squad(Squad const &src) {
	*this = src;
}

Squad::~Squad(void) {
	this->SquadClean();
}

Squad	&Squad::operator=(Squad const &rhs) {
	if (this == &rhs)
		return (*this);
	this->SquadClean();
	this->_tsquad = rhs._tsquad;
	this->_SquadCount = rhs._SquadCount;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Squad const &i) {
	(void)i;
//	o << i.;
	return (o);
}

int				Squad::getCount(void) const { return (this->_SquadCount); }

ISpaceMarine	*Squad::getUnit(int nb) const {
	if (nb < 0 || nb > this->_SquadCount)
		return (NULL);
	int i = -1; t_squad *tmpsquad = this->_tsquad;
	while (tmpsquad && ++i != nb)
		tmpsquad = tmpsquad->next;
	return (tmpsquad == NULL ? NULL : tmpsquad->marine);
}

int				Squad::push(ISpaceMarine *marine) {
	if (!marine)
		return (this->_SquadCount);
	if (!this->_tsquad)
		this->_tsquad = this->newMember(marine);
	else if (this->_tsquad->marine != marine)
	{
		t_squad *tmpsquad = this->_tsquad;
		while (tmpsquad->next)
		{
			if (tmpsquad->next->marine == marine)
				return (this->_SquadCount);
			tmpsquad = tmpsquad->next;
		}
		tmpsquad->next = this->newMember(marine);
	}
	return (this->_SquadCount);
}

t_squad			*Squad::newMember(ISpaceMarine *marine) {
	t_squad *_new;

	if (!(_new = new t_squad))
		return (NULL);
	_new->marine = marine;
	_new->next = NULL;
	this->_SquadCount++;
	return (_new);
}

void		Squad::SquadClean(void) {
	t_squad *current; t_squad *then;

	current = this->_tsquad;
	while (current)
	{
		then = current->next;
		delete current->marine;
		delete current;
		current = then;
	}
	this->_tsquad = NULL;
	this->_SquadCount = 0;
}
