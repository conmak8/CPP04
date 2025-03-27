/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:37:11 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 21:44:44 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Colors.hpp"


Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << CYAN << "😺 Cat 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

// v.2
// Cat::Cat() {
//     type = "Cat";
//     std::cout << "Cat: Default constructor called" << std::endl;
// }

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << CYAN << "😺 Cat 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy), brain(new Brain(*copy.brain))
{
	std::cout << CYAN << "😺 Cat 🏗️  Copy Constructor called for " << UBR << type << RESET << std::endl;
}

Cat &Cat::operator= (const Cat &copy)
{
	if (this == &copy)
	{
		std::cout << YELLOW << "⚠️ Self-assignment detected, no changes made!" << RESET << std::endl;
		return (*this);
	}
	Animal::operator=(copy);
	delete brain;
	brain = new Brain(*copy.brain);
	std::cout << CYAN << "😺 Cat © Copy Assignment operator called for " << UBR << type << RESET << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << RED << "😺 Cat 🧨 Destructor called for " << UBR << type << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "📣 Niaou Niaou i am a CAT 😺" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
	brain->setIdea(index, idea);
}

void Cat::printIdeas() const
{
	std::cout << "😺 Cat's Ideas:" << std::endl;
	int count = brain->getIdeaCount();
	for (int i = 0; i < count; ++i)
	{
		std::cout << " - " << brain->getIdea(i) << std::endl;
	}
}
