/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:34:11 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 21:05:36 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Colors.hpp"


Dog::Dog() : A_Animal("Dog")
{
	brain = new Brain();
	std::cout << WHITE << "🐶 Dog 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

//v.2
// Dog::Dog() {
//     type = "Dog";
//     std::cout << "Dog: Default constructor called" << std::endl;
// }

Dog::Dog(const std::string &type) : A_Animal(type)
{
	std::cout << WHITE << "🐶 Dog 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

Dog::Dog(const Dog &copy) : A_Animal(copy), brain(new Brain(*copy.brain))
{
	std::cout << WHITE << "🐶 Dog 🏗️  Copy Constructor called for " << UBR << type << RESET << std::endl;
}

Dog &Dog::operator= (const Dog &copy)
{
	if (this == &copy)
	{
		std::cout << YELLOW << "⚠️ Self-assignment detected, no changes made!" << RESET << std::endl;
		return (*this);
	}
	A_Animal::operator=(copy);
	delete brain;
	brain = new Brain(*copy.brain);
	std::cout << WHITE << "🐶 Dog © Copy Assignment operator called for " << UBR << type << RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << RED << "🐶 Dog 🧨 Destructor called for " << UBR << type << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "📣 Woof woof i am a DOG 🐶" << std::endl;
}
