/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:59:47 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/03/07 12:18:40 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() 
{
    Data myData;
    myData.id = 42;
    myData.name = "Données de test";
    
    // Sérialiser le pointeur
    uintptr_t raw = Serializer::serialize(&myData);
    
    // Désérialiser en un pointeur
    Data* deserializedData = Serializer::deserialize(raw);
    
    // Vérifier si le pointeur désérialisé est le même que l'original
    if (deserializedData == &myData) {
        std::cout << "Sérialisation et désérialisation réussies !\n";
        std::cout << "ID : " << deserializedData->id << ", Nom : " << deserializedData->name << "\n";
    } else {
        std::cout << "Échec de la sérialisation et de la désérialisation !\n";
    }
    
    return 0;
}
