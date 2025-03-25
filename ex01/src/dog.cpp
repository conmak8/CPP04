/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:34:11 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 19:51:45 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Colors.hpp"


Dog::Dog() : Animal("Dog")
{
	std::cout << CYAN << "🐶 Dog 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

//v.2
// Dog::Dog() {
//     type = "Dog";
//     std::cout << "Dog: Default constructor called" << std::endl;
// }

// Dog::Dog(const std::string &type) : Animal(type)
// {
// 	std::cout << CYAN << "🐶 Dog 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
// }

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << CYAN << "🐶 Dog 🏗️  Copy Constructor called for " << UBR << type << RESET << std::endl;
}

Dog &Dog::operator= (const Dog &copy)
{
	if (this == &copy)
	{
		std::cout << YELLOW << "⚠️ Self-assignment detected, no changes made!" << RESET << std::endl;
		return (*this);
	}
	Animal::operator=(copy);
	std::cout << CYAN << "🐶 Dog © Copy Assignment operator called for " << UBR << type << RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "🐶 Dog 🧨 Destructor called for " << UBR << type << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "📣 Woof woof i am a DOG 🐶" << std::endl;
}
