/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:29:56 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/08 16:32:50 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.hpp"
#include <iostream>

int main() {
    Base *ptr = generate(); // Génération aléatoire
    identify(ptr); // Identification via pointeur
    identify(*ptr); // Identification via référence

    delete ptr; // Nettoyage mémoire
    return 0;
}
