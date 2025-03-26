/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:19:54 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 16:03:44 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"


int main() {
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	delete dog; // Must delete Dog and its Brain correctly
	delete cat; // Must delete Cat and its Brain correctly

	// Testing deep copy explicitly
	std::cout << "\nTesting deep copy explicitly " << std::endl;
	Dog basicDog;
	{
		Dog tmpDog = basicDog; // Calls copy constructor (deep copy)
	} // tmpDog destructor called here, Brain should be deleted

	std::cout << "\nTesting  copy assignment operator (deep copy) " << std::endl;
	Cat basicCat;
	Cat anotherCat;
	anotherCat = basicCat; // Calls copy assignment operator (deep copy)

	return (0);
}
