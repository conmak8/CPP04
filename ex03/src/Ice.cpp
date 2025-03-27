/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 08:44:01 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 08:52:18 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")												// * Constructor (default)
{
	std::cout << "❄️ Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)									// * Copy constructor
{
	std::cout << "❄️ Ice copy constructor called" << std::endl;
}

Ice &Ice::operator= (const Ice &copy)										// * Copy assignment operator
{
	if (this == &copy)
	{
		std::cout << "⚠️ Self-assignment detected, no changes made!" << std::endl;
		return (*this);
	}
	this->type = copy.type;
	std::cout << "❄️ Ice copy assignment operator called" << std::endl;
	return (*this);
}

Ice::~Ice()																	// * Destructor
{
	std::cout << "❄️ Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	// std::cout << "❄️ Ice clone called" << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "❄️ * shoots an ice bolt at " << target.getName() << " *"  << std::endl;
}
