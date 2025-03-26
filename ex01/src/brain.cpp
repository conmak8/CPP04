/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:43:20 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 15:15:47 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "../include/Colors.hpp"


Brain::Brain()
{
	std::cout << MAGENTA << "🧠 Brain: Constructor called." << RESET << std::endl;
}

Brain::Brain(const std::string &name)
{
	std::cout << MAGENTA << "🧠 Brain: Constructor called." << RESET << name << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << MAGENTA << "🧠 Brain: 🏗️ Copy Constructor called." << UBR << RESET << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator = (const Brain &copy)
{
	if (this == &copy)
	{
		std::cout << YELLOW << "⚠️ Self-assignment detected, no changes made!" << RESET << std::endl;
		return (*this);
	}
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << MAGENTA << "🧠 Brain: © Copy Assignment operator called for " << UBR << RESET << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "🧠 Brain: 🧨 Destructor called." << UBR << RESET << std::endl;
}

void Brain::setIdea(int index, const std::string &idea)
{
	if ((index >=0) && (index <= 100))
		ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if ((index >=0) && (index <= 100))
		return (ideas[index]);
	return ("😑wrong input!");
}
