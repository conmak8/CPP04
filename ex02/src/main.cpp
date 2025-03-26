/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:19:54 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 21:18:09 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A_Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"


int main() {

	// A_Animal* animal = new A_Animal();	// 🚫 NOT ALLOWED
	// A_Animal animal;						// 🚫 NOT ALLOWED
	
	A_Animal* animals[2];

	animals[0] = new Dog();					// ✅ 
	animals[1] = new Cat();					// ✅ 

	for (int i = 0; i < 2; ++i)
		animals[i]->makeSound();

	for (int i = 0; i < 2; ++i)
		delete animals[i];

	return 0;
}
