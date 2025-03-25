/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:19:15 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 12:35:50 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Colors.hpp"


Animal::Animal() : type("Nameless stray creature")
{
	std::cout << CYAN << "🦦 Animal 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}
																	// ? do i need this??
Animal::Animal(const std::string &type) : type(type)
{
	std::cout << CYAN << "🦦 Animal 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << CYAN << "🦦 Animal 🏗️  Copy Constructor called for " << UBR << type << RESET << std::endl;
}

Animal &Animal::operator= (const Animal &copy)
{
	if (this == &copy)
	{
		std::cout << YELLOW << "⚠️ Self-assignment detected, no changes made!" << RESET << std::endl;
		return (*this);
	}
	this->type = copy.type;
	std::cout << CYAN << "🦦 Animal © Copy Assignment operator called for " << UBR << type << RESET << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "🦦 Animal 🧨 Destructor called for " << UBR << type << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "📣 Just a humble animal 🦦 seeking identity to make proper sound Niaou?Woof" << std::endl;
}
