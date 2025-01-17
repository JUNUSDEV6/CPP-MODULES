/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:00:14 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/17 14:26:11 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // AAnimal animal; // Erreur : une classe abstraite ne peut pas être instanciée

    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    std::cout << "Dog is a " << dog->getType() << std::endl;
    dog->makeSound();

    std::cout << "Cat is a " << cat->getType() << std::endl;
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}
