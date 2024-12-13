#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	st::cout << "Constructor ClapTrap  Called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap Called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		_EnergyPoints--;
		std::cout << "ClapTrap :" << _name << "attack " << target << "and causing " << _attackDamage << 
			" amount of damage " << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << "can't attack because insufficiency of amount " <<
			_EnergyPoints << "energy" << std::endl;
	}
}


