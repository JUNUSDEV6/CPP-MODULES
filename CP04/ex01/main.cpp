/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:00:14 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/15 16:43:29 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // Testing Animal, Dog, and Cat
    std::cout << "=== Animal, Dog, and Cat Tests ===" << std::endl;

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " makes sound: ";
    dog->makeSound();

    std::cout << cat->getType() << " makes sound: ";
    cat->makeSound();

    std::cout << meta->getType() << " makes sound: ";
    meta->makeSound();

    // Cleaning up
    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n=== WrongAnimal and WrongCat Tests ===" << std::endl;

    // Testing WrongAnimal and WrongCat
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongMeta->getType() << " makes sound: ";
    wrongMeta->makeSound(); // WrongAnimal sound

    std::cout << wrongCat->getType() << " makes sound: ";
    wrongCat->makeSound(); // Still WrongAnimal sound due to lack of virtual

    const WrongCat* actualWrongCat = new WrongCat();
    std::cout << actualWrongCat->getType() << " makes sound: ";
    actualWrongCat->makeSound(); // This will call WrongCat::makeSound() because the pointer is of type WrongCat

    // Cleaning up
    delete wrongMeta;
    delete wrongCat;
    delete actualWrongCat;

    std::cout << "\n=== Additional Tests ===" << std::endl;

    // Testing assignment and copy constructor for polymorphic and non-polymorphic cases
    Dog originalDog;
    Dog copiedDog(originalDog);

    WrongCat originalWrongCat;
    WrongCat copiedWrongCat(originalWrongCat);

    std::cout << "Copied Dog type: " << copiedDog.getType() << std::endl;
    std::cout << "Copied WrongCat type: " << copiedWrongCat.getType() << std::endl;

    return 0;
}
