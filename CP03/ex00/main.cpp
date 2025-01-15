/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:42:57 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/08 16:45:14 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    // Création d'un ClapTrap
    ClapTrap claptrap("Clappy");

    // Test des méthodes
    std::cout << "\nTest: Attaque\n";
    claptrap.attack("Target A");

    std::cout << "\nTest: Dégâts\n";
    claptrap.takeDamage(5);

    std::cout << "\nTest: Réparation\n";
    claptrap.beRepaired(3);

    std::cout << "\nTest: Attaques successives jusqu'à épuisement de l'énergie\n";
    for (int i = 0; i < 10; i++) {
        claptrap.attack("Target B");
    }

    std::cout << "\nTest: Aucune énergie restante\n";
    claptrap.attack("Target C");
    claptrap.beRepaired(5);

    std::cout << "\nTest: Dégâts fatals\n";
    claptrap.takeDamage(20);

    std::cout << "\nTest: Aucune vie restante\n";
    claptrap.attack("Target D");
    claptrap.beRepaired(5);

    return 0;
}
