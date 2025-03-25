/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:19:54 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 17:01:01 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	
	// std::cout << "---> " << j->getType() << " <---- " << std::endl;
	// std::cout << "---> " << i->getType() << " <---- " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	
	// delete meta;
	// delete j;
	// delete i;
	
	//---------2nd Test
	// const Animal* meta = new Animal();
	// const Animal* doggy = new Dog();
	// const Animal* kitty = new Cat();

	// std::cout << doggy->getType() << std::endl;
	// std::cout << kitty->getType() << std::endl;

	// doggy->makeSound();
	// kitty->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete doggy;
	// delete kitty;

	//---------3rd Test with wrongggg
	// const WrongAnimal* meta = new WrongAnimal();
	// const WrongAnimal* kitty = new WrongCat();

	// std::cout << meta->getType() << std::endl;
	// std::cout << kitty->getType() << std::endl;

	// kitty->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete kitty;

	//=============
	// Correct polymorphism
	std::cout << "\n✅ Correct polymorphism test:\n";
	const Animal* animal = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	animal->makeSound();
	cat->makeSound();
	dog->makeSound();

	delete animal;
	delete cat;
	delete dog;

	// Incorrect polymorphism demonstration
	std::cout << "\n❌ Incorrect polymorphism test:\n";
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();  // 🚩 

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}
