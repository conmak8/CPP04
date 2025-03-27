/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 09:36:14 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 09:57:54 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Unknown")													// * Constructor (default)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "👤 Character 🏗️ Default Constructor called" << std::endl;
}

Character::Character(const std::string &name) : name(name)									// * Constructor with parameter
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "👤 Character 🏗️ Constructor called for: " << name << std::endl;
}

Character::Character(const Character &src) : name(src.name)									// * Copy constructor
{
	for (int i = 0; i < 4; i++)
	{
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	// inventory[i] = src.inventory[i] ? src.inventory[i]->clone() : NULL;
	std::cout << "👤 Character 🏗️ Copy Constructor called for: " << name << std::endl;
}

Character &Character::operator=(const Character &src)										// * Copy assignment operator
{
	if (this == &src)
	{
		std::cout << "⚠️ Self-assignment detected, no changes made!" << std::endl;
		return (*this);
	}
	this->name = src.name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i]) 																	// ?why to check this one?
		{
			delete inventory[i]; // Clean existing slot clearly
			inventory[i] = NULL;
		}
		if (src.inventory[i])
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = NULL;
		// inventory[i] = src.inventory[i] ? src.inventory[i]->clone() : NULL;
	}
	std::cout << "👤 Character © Copy Assignment operator called for: " << name << std::endl;
	return (*this);
}

Character::~Character()																	// * Destructor
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	std::cout << "👤 Character 🧨 Destructor called for: " << name << std::endl;
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "👤 " << name << " can't equip a NULL Materia!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i]) //inventory[i] == NULL
		{
			inventory[i] = m;
			std::cout << "👤 " << name << " equipped " << m->getType() << "at slot " << i <<  std::endl;
			return ;
		}
	}
	std::cout << "👤 " << name << " can't equip more than 4 Materias!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "👤 " << name << " can't unequip a Materia at index: " << idx << std::endl;
		return ;
	}
	if (inventory[idx])
	{
		inventory[idx] = NULL;
		std::cout << "👤 " << name << " unequipped Materia " << inventory[idx]->getType() << "at index: " << idx << std::endl;
	}
	else
		std::cout << "👤 " << name << " can't unequip a NULL Materia!" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "👤 " << name << " can't use a Materia at index: " << idx << std::endl;
		return ;
	}
	if (inventory[idx])
		inventory[idx]->use(target);
	else
		std::cout << "👤 " << name << " can't use a NULL Materia!" << std::endl;
}
