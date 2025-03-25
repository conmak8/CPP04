/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:43:20 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 20:24:59 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "../include/Colors.hpp"


Brain::Brain()
{
	std::cout << CYAN << "🧠 Brain: Constructor called " << RESET << std::endl;
}

Brain::Brain(const std::string &name)
{
	std::cout << CYAN << "🧠 Brain: Constructor called " << RESET << name << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << CYAN << "🧠 Brain: 🏗️ Copy Constructor called " << UBR << RESET << std::endl;
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
	std::cout << CYAN << "🧠 Brain: © Copy Assignment operator called for " << UBR << RESET << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "🧠 Brain: 🧨 Destructor called" << UBR << RESET << std::endl;
}


void setIdea(size_t index, const std::string &idea)
{
	if ((index >=0) && (index <= 100))
		return (ideas[index] = idea);
}

std::string Brain::getIdea(size_t index) const
{
	if ((index >=0) && (index <= 100))
		return (ideas[i]);
	return ("wrong input!");
}