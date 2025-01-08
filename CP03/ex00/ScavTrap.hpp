#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class	ScravTrap : public ClapTrap
{
	public:
		ScravTrap(std::string name);
		ScravTrap(const ScravTrap& other);
		ScravTrap& operator=(const ScravTrap& other);
		~ScravTrap(void);

		void	attack(const std::string&  target);
		void	guardGate(void);

	private:
}

#endif
