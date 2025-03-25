/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:19:15 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 10:16:06 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Colors.hpp"


Animal::Animal() : Animal("Nameless stray creature")
{
	std::cout << CYAN << "🦦 Animal 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

Animal::Animal(const std::string &type) : Animal(type)
{
	std::cout << CYAN << "🦦 Animal 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

Animal::Animal(const Animal &copy) : Animal(copy)
{
	std::cout << CYAN << "🦦 Animal 🏗️  Copy Constructor called for " << UBR << type << RESET << std::endl;
}

Animal &Animal::operator= (const Animal &copy)
{
	if (this == &copy)
	{
		std::cout << "Self assignment detected, skipping copy";
		return (*this);
	}
	Animal::operator=(copy);
	std::cout << CYAN << "🦦 Animal © Copy Assignment operator called for " << UBR << type << RESET << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "🦦 Animal 🧨 Destructor called for " << UBR << type << RESET << std::endl;
}

void Animal::makeSound()
{
	std::cout << "📣 Just a humble animal 🦦 seeking identity" << std::endl;
}
