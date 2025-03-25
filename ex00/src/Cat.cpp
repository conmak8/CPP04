/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:37:11 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 10:11:34 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Colors.hpp"


Cat::Cat() : Animal("Nameless stray creature")
{
	std::cout << CYAN << "😺 Cat 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << CYAN << "😺 Cat 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << CYAN << "😺 Cat 🏗️  Copy Constructor called for " << UBR << type << RESET << std::endl;
}

Cat &Cat::operator= (const Cat &copy)
{
	if (this == &copy)
	{
		std::cout << "Self assignment detected, skipping copy";
		return (*this);
	}
	Animal::operator=(copy);
	std::cout << CYAN << "😺 Cat © Copy Assignment operator called for " << UBR << type << RESET << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << RED << "😺 Cat 🧨 Destructor called for " << UBR << type << RESET << std::endl;
}

void Cat::makeSound()
{
	std::cout << "📣 Niaou Niaou i am a CAT 😺" << std::endl;
}
