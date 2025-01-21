/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:36:11 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/21 16:03:54 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "=== Test: MateriaSource Learning and Creating ===" << std::endl;
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << "Materias in source after learning Ice and Cure:" << std::endl;
    src->printMaterias();
    AMateria *iceMateria = src->createMateria("ice");
    AMateria *cureMateria = src->createMateria("cure");
    std::cout << "\n=== Test: Equipping and Using Materias ===" << std::endl;
    ICharacter *me = new Character("me");
    me->equip(iceMateria);
    me->equip(cureMateria);
    std::cout << "\nme's inventory after equipping Ice and Cure:" << std::endl;
    me->printMaterias();
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << "\n=== Test: Unequipping Materias ===" << std::endl;
    me->unequip(0);
    std::cout << "\nme's inventory after unequipping Ice:" << std::endl;
    me->printMaterias();
    std::cout << "\n=== Test: Using unequipped Materia ===" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << "\n=== Test: Full Inventory ===" << std::endl;
    AMateria *tmp1 = src->createMateria("ice");
    AMateria *tmp2 = src->createMateria("cure");
    AMateria *tmp3 = src->createMateria("cure");
    AMateria *tmp4 = src->createMateria("ice");
    me->equip(tmp1);
    me->equip(tmp2);
    me->equip(tmp3);
    std::cout << "\n inventory is full" << std::endl;
    me->equip(tmp4);
    std::cout << "\nme's inventory after trying to overfill:" << std::endl;
    me->printMaterias();
    std::cout << "\n=== Test: MateriaSource unknown Materia type ===" << std::endl;
    AMateria *unknown = src->createMateria("fire");
    if (!unknown)
        std::cout << "Unknown materia type 'fire' could not be created." << std::endl;
    std::cout << "\n=== Test: Character Copy Constructor ===" << std::endl;
    ICharacter *cloned = new Character(*(dynamic_cast<Character*>(me)));
    std::cout << "\nCloned character's inventory:" << std::endl;
    cloned->printMaterias();
    std::cout << "\n=== Test: Character Assignment Operator ===" << std::endl;
    Character *other = new Character("other");
    *other = *(dynamic_cast<Character*>(me));
    std::cout << "\nother's inventory after assignment:" << std::endl;
    other->printMaterias();
    std::cout << "\n=== Test: Clean-up and Memory Management ===" << std::endl;
    delete bob;
    delete me;
    delete cloned;
    delete other;
    delete src;
	delete tmp4;
	delete iceMateria;
    return 0;
}