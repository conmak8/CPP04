/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:19:15 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 21:21:21 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A_Animal.hpp"
#include "../include/Colors.hpp"


A_Animal::A_Animal() : type("Nameless stray creature")
{
	std::cout << BLUE << "🦦 A_Animal 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

A_Animal::A_Animal(const std::string &type) : type(type)
{
	std::cout << BLUE << "🦦 A_Animal 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

A_Animal::A_Animal(const A_Animal &copy) : type(copy.type)
{
	std::cout << BLUE << "🦦 A_Animal 🏗️  Copy Constructor called for " << UBR << type << RESET << std::endl;
}

A_Animal &A_Animal::operator= (const A_Animal &copy)
{
	if (this == &copy)
	{
		std::cout << YELLOW << "⚠️ Self-assignment detected, no changes made!" << RESET << std::endl;
		return (*this);
	}
	this->type = copy.type;
	std::cout << BLUE << "🦦 A_Animal © Copy Assignment operator called for " << UBR << type << RESET << std::endl;
	return (*this);
}

A_Animal::~A_Animal()
{
	std::cout << RED << "🦦 A_Animal 🧨 Destructor called for " << UBR << type << RESET << std::endl;
}

std::string A_Animal::getType() const
{
	return (type);
}

// void A_Animal::makeSound() const
// {
// 	std::cout << "📣 Just a humble animal 🦦 seeking identity to make proper sound Niaou?Woof" << std::endl;
// }
