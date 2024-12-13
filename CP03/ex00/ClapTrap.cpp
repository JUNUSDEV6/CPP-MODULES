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
		std::cout << "ClapTrap :" << _name << "attack " << target << "and causing " << _attackDamage << " amount of damage " << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << "can't attack because insufficiency of amount " << _EnergyPoints << "energy" << "or" << _HitPoints << "healt point" <<  std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((_HitPoints - amount) >= 0)
	{
		_HitPoints -= amount;
		std::cout << "ClapTrap " << _name << "loose of amount :" << amount << "HitPoints now is amount of Hitpoints" << _HitPoints << std::endl;
	}
	else
	{
		_HitPoints = 0;
		std::cout << "ClapTrap " << _name << "loose of amount :" << amount << "HitPoints now is amount of Hitpoints" << _HitPoints << std::endl;

	}
}

void	ClapTrap::BeRepaired(unsigned int amount)
{
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		_EnergyPoints--;
		_HitPoints += amount;
		std::cout << "ClapTrap " << _name << "take care of amount " << amount << " now his HitPoints " << _HitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << "can't attack because insufficiency of amount " << _EnergyPoints << "energy" << "or" << _HitPoints << "healt point" <<  std::endl;
}


