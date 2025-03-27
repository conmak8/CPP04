/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:19:54 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 22:12:25 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A_Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"


int main() {

	// A_Animal* animal = new A_Animal();	// 🚫 NOT ALLOWED
	// A_Animal animal;						// 🚫 NOT ALLOWED
	
	// A_Animal* animals[2];

	// animals[0] = new Dog();					// ✅ 
	// animals[1] = new Cat();					// ✅ 

	// for (int i = 0; i < 2; ++i)
	// 	animals[i]->makeSound();

	// for (int i = 0; i < 2; ++i)
	// 	delete animals[i];

	// return 0;


	// Initialization of all three types:
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();
	
	// testing the inherited getType member function:
	std::cout << std::endl;
	std::cout << "Object a is of type: " << dog->getType() << std::endl;
	std::cout << "Object b is of type: " << cat->getType() << std::endl;
	std::cout << std::endl;
	
	// testing the overriden makeSound method:
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	delete cat;
	delete dog;
	
	return 0;


	
}
