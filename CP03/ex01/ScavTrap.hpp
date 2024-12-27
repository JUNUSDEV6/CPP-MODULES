#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public Claptrap
{
	public:
		ScravTrap(std::string name);
		ScravTrap(const ScravTrap& other);
		ScravTrap(& operator=(const ScravTrap& other);
		~ScravTrap(void);

		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
