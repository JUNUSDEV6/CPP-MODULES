#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap clap("CL4P-TP");

    clap.attack("enemy");
    clap.takeDamage(11);
    clap.beRepaired(5);

    clap.attack("another enemy");
    clap.takeDamage(15);
    clap.beRepaired(3);

    return 0;
}
