/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:20:11 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 11:39:15 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/MateriaSource.hpp"
#include <iostream>

int main() {

	std::cout << "\n📌📌📌 📚 Testing MateriaSource 📚 📌📌📌\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n📌📌📌 🧙 Testing Character creation 🧙 📌📌📌\n" << std::endl;
	ICharacter* me = new Character("Player");

	std::cout << "\n📌📌📌 🎒 Testing Inventory Equip 🎒 📌📌📌\n" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n📌📌📌 📣 Testing Materia Usage 📣 📌📌📌\n" << std::endl;
	ICharacter* enemy = new Character("Enemy");

	me->use(0, *enemy);  // Uses Ice on Enemy
	me->use(1, *enemy);  // Uses Cure on Enemy

	std::cout << "\n📌📌📌 ❌ Testing Unequip ❌ 📌📌📌\n" << std::endl;
	me->unequip(0);
	me->use(0, *enemy);  // Should fail to use unequipped slot

	std::cout << "\n📌📌📌 📖 Testing Copy Construction & Assignment 📖 📌📌📌\n" << std::endl;
	Character* anotherPlayer = new Character("ClonePlayer");
	*anotherPlayer = *(Character*)me;  // Test deep copy assignment

	anotherPlayer->use(1, *enemy); // Should work as intended (independent copy)

	std::cout << "\n📌📌📌 🔥 Testing Cleanup 🔥 📌📌📌\n" << std::endl;
	delete src;
	delete me;
	delete anotherPlayer;
	delete enemy;

	std::cout << "\n🎉🎉🎉 All tests completed successfully! 🎉🎉🎉\n" << std::endl;
	return 0;
}
