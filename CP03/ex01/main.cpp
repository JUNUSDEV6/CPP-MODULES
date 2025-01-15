/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:41:33 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/08 16:41:36 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "---- Testing ClapTrap ----" << std::endl;

    ClapTrap clap("Clappy");
    clap.attack("target1");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("target2");
    clap.takeDamage(20); // Excessive damage to simulate death
    clap.attack("target3"); // Shouldn't attack due to zero health/energy

    std::cout << "\n---- Testing ScavTrap ----" << std::endl;

    ScavTrap scav("Scavy");
    scav.attack("enemy1");
    scav.takeDamage(50);
    scav.beRepaired(30);
    scav.guardGate();
    scav.attack("enemy2");
    scav.takeDamage(70); // Excessive damage
    scav.attack("enemy3"); // Shouldn't attack due to zero health/energy

    std::cout << "\n---- End of Tests ----" << std::endl;
    return 0;
}
