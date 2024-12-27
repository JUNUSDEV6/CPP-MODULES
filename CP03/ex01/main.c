/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:21:02 by yohanafi          #+#    #+#             */
/*   Updated: 2024/12/27 15:24:09 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "Creating ScavTrap...\n";
    ScavTrap scav1("Scavy");

    ScavTrap scav2 = scav1; // Copy constructor
    ScavTrap scav3;
    scav3 = scav1;          // Copy assignment operator

    ScavTrap scav4(std::move(scav1)); // Move constructor
    ScavTrap scav5;
    scav5 = std::move(scav4);         // Move assignment operator

    scav3.attack("enemy");
    scav3.guardGate();

    std::cout << "\nDestroying ScavTrap...\n";
    return 0;
}