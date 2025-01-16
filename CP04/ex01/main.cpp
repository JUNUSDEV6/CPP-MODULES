/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:00:14 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/16 17:46:37 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "=== Animal Array Test ===" << std::endl;

    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }

    // Set and print brain ideas
    Dog* dog = dynamic_cast<Dog*>(animals[0]);
    if (dog) {
        std::cout << "ici" << std::endl;
        dog->setBrainIdea(0, "Chase the ball!");
        std::cout << "Dog Brain Idea: " << dog->getBrainIdea(0) << std::endl;
    }

    Cat* cat = dynamic_cast<Cat*>(animals[2]);
    if (cat) {
        cat->setBrainIdea(0, "Catch the mouse!");
        std::cout << "Cat Brain Idea: " << cat->getBrainIdea(0) << std::endl;
    }

    // Delete animals and check destructors
    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }

    std::cout << "=== Deep Copy Test ===" << std::endl;
    Dog dog1;
    dog1.setBrainIdea(0, "Guard the house");
    Dog dog2 = dog1; // Deep copy

    std::cout << "Dog1 Brain Idea: " << dog1.getBrainIdea(0) << std::endl;
    std::cout << "Dog2 Brain Idea: " << dog2.getBrainIdea(0) << std::endl;

    dog2.setBrainIdea(0, "fdp");

    std::cout << "Dog1 Brain Idea: " << dog1.getBrainIdea(0) << std::endl;
    std::cout << "Dog2 Brain Idea: " << dog2.getBrainIdea(0) << std::endl;

    return 0;
}
