/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 08:58:56 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 09:06:28 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")													// * Constructor (default)
{
	std::cout << "💊 Cure 🏗️constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)									// * Copy constructor
{
	std::cout << "💊 Cure 🏗️copy constructor called" << std::endl;
}

Cure &Cure::operator= (const Cure &copy)										// * Copy assignment operator
{
	if (this == &copy)
	{
		std::cout << "⚠️ Self-assignment detected, no changes made!" << std::endl;
		return (*this);
	}
	AMateria::operator= (copy);
	std::cout << "💊 Cure copy assignment operator called" << std::endl;
	return (*this);
}

Cure::~Cure()																	// * Destructor
{
	std::cout << "💊 Cure 🧨destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	// std::cout << "💊 Cure clone called" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "💊 * heals " << target.getName() << "'s wounds *"  << std::endl;
}
