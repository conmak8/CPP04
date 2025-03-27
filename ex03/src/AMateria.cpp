/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 08:04:57 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 08:50:12 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Unknown")																	// * Constructor (default)
{
	std::cout << "🥨 AMateria 🏗️  Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)												// * Constructor with parameters
{
	std::cout << "🥨 AMateria 🏗️  Constructor called for: " << type << std::endl;
}

AMateria::AMateria(const AMateria &copy) : type(copy.type)												// * Copy constructor
{
	std::cout << "🥨 AMateria 🏗️  Copy Constructor called for: " << type << std::endl;
}

AMateria &AMateria::operator= (const AMateria &copy)													// * Copy assignment operator
{
	if (this == &copy)
	{
		std::cout << "⚠️ Self-assignment detected, no changes made!" << std::endl;
		return (*this);
	}
	this->type = copy.type;
	std::cout << "🥨 AMateria © Copy Assignment operator called for: " << type << std::endl;
	return (*this);
}

AMateria::~AMateria()																					// * Destructor
{
	std::cout << "🥨 AMateria 🧨 Destructor called for: " << type << std::endl;
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "🥨 AMateria of type: " << type << " used without effect on " << target.getName() << std::endl;
}
