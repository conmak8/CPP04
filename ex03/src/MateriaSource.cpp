/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:15:04 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 11:17:49 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource() : learnedMaterias()											// * Constructor
{
	for (int i = 0; i < 4; i++)
		learnedMaterias[i] = NULL;
	std::cout << "📚 MateriaSource 🏗️ Default Constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src)										// * Copy constructor
{
	for (int i = 0; i < 4; i++)
	{
		if (src.learnedMaterias[i])
			learnedMaterias[i] = src.learnedMaterias[i]->clone();
		else
			learnedMaterias[i] = NULL;
	}
	std::cout << "📚 MateriaSource 🏗️ Copy Constructor called for deep copy." << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)							// * Copy assignment operator
{
	if (this == &src)
	{
		std::cout << "⚠️ Self-assignment detected, no changes made!" << std::endl;
		return (*this);
	}
	for (int i = 0; i < 4; i++)
	{
		if (learnedMaterias[i])
			delete learnedMaterias[i];														// ? why set to NULL?
		if (src.learnedMaterias[i])
			learnedMaterias[i] = src.learnedMaterias[i]->clone();
		else
			learnedMaterias[i] = NULL;
	}
	std::cout << "📚 MateriaSource © Copy Assignment operator called for deep copy." << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()																// * Destructor
{
	for (int i = 0; i < 4; i++)
	{
		if (learnedMaterias[i])
			delete learnedMaterias[i];
	}
	std::cout << "📚 MateriaSource 🧨 Destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
	{
		std::cout << "📚 MateriaSource can't learn a NULL Materia!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!learnedMaterias[i])
		{
			learnedMaterias[i] = m->clone();
			std::cout << "📚 MateriaSource learned " << m->getType() << " at slot " << i << std::endl;
			delete m;
			return ;
		}
	}
	std::cout << "📚 MateriaSource can't learn more than 4 Materias!" << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (learnedMaterias[i] && learnedMaterias[i]->getType() == type)
		{
			std::cout << "📚 MateriaSource created " << type << std::endl;
			return (learnedMaterias[i]->clone());
		}
	}
	std::cout << "📚 MateriaSource can't create " << type << std::endl;
	return (NULL);
}
