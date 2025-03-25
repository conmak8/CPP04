/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:19:54 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 15:56:21 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "---> " << j->getType() << " <---- " << std::endl;
	std::cout << "---> " << i->getType() << " <---- " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	
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

	return 0;
}
