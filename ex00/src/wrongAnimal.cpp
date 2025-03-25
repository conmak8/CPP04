/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:19:15 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 16:37:55 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include "../include/Colors.hpp"


WrongAnimal::WrongAnimal() : type("Nameless stray creature")
{
	std::cout << CYAN << "🦦 WrongAnimal 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}
																	// ? do i need this??
WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << CYAN << "🦦 WrongAnimal 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
	std::cout << CYAN << "🦦 WrongAnimal 🏗️  Copy Constructor called for " << UBR << type << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &copy)
{
	if (this == &copy)
	{
		std::cout << YELLOW << "⚠️ Self-assignment detected, no changes made!" << RESET << std::endl;
		return (*this);
	}
	this->type = copy.type;
	std::cout << CYAN << "🦦 WrongAnimal © Copy Assignment operator called for " << UBR << type << RESET << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "🦦 WrongAnimal 🧨 Destructor called for " << UBR << type << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "📣 Just a humble WrongAnimal 🦦 seeking identity to make proper sound Niaou?Woof" << std::endl;
}
