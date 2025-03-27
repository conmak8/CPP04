/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:20:11 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 16:09:12 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/MateriaSource.hpp"
#include <iostream>
#include <unistd.h>

int main()
{

	// std::cout << "\n📌📌📌 📚 Testing MateriaSource 📚 📌📌📌\n" << std::endl;
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// std::cout << "\n📌📌📌 🧙 Testing Character creation 🧙 📌📌📌\n" << std::endl;
	// ICharacter* me = new Character("Player");

	// std::cout << "\n📌📌📌 🎒 Testing Inventory Equip 🎒 📌📌📌\n" << std::endl;
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// std::cout << "\n📌📌📌 📣 Testing Materia Usage 📣 📌📌📌\n" << std::endl;
	// ICharacter* enemy = new Character("Enemy");

	// me->use(0, *enemy);  // Uses Ice on Enemy
	// me->use(1, *enemy);  // Uses Cure on Enemy

	// std::cout << "\n📌📌📌 ❌ Testing Unequip ❌ 📌📌📌\n" << std::endl;
	// me->unequip(0);
	// delete tmp; 
	// me->use(0, *enemy);  // Should fail to use unequipped slot

	// std::cout << "\n📌📌📌 📖 Testing Copy Construction & Assignment 📖 📌📌📌\n" << std::endl;
	// Character* anotherPlayer = new Character("ClonePlayer");
	// *anotherPlayer = *(Character*)me;  // Test deep copy assignment

	// anotherPlayer->use(1, *enemy); // Should work as intended (independent copy)

	// std::cout << "\n📌📌📌 🔥 Testing Cleanup 🔥 📌📌📌\n" << std::endl;
	// delete src;
	// delete me;
	// delete anotherPlayer;
	// delete enemy;

	// std::cout << "\n🎉🎉🎉 All tests completed successfully! 🎉🎉🎉\n" << std::endl;
	// return 0;




	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("MK");
	
	std::cout << "\nTEST 1: MateriaSource Capacity up to 4 \n" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\nTEST 2: Wrong Index of Materia to use \n" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(42, *bob);

	std::cout << "\nTEST 3: Unequip Materia \n" << std::endl;
	me->unequip(1);
	me->unequip(0);
	me->unequip(100);
	std::cout << std::endl;
	
	delete bob;
	delete me;
	delete src;
	
	
	return 0;



// IMateriaSource* src = new MateriaSource();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());

// ICharacter* me = new Character("Player");

// AMateria* tmp;
// tmp = src->createMateria("ice");
// me->equip(tmp);    // Equip the player with the Ice Materia
// delete tmp;        // Free the memory after equipping

// tmp = src->createMateria("cure");
// me->equip(tmp);    // Equip the player with the Cure Materia
// delete tmp;        // Free the memory after equipping

// ICharacter* bob = new Character("Enemy");

// me->use(0, *bob);
// me->use(1, *bob);

// delete bob;  // Clean up Enemy character
// delete me;   // Clean up Player character
// delete src;  // Clean up MateriaSource

// return 0;
}