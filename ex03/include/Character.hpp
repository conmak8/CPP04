/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 09:21:46 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 20:02:26 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

# define MAX_UNEQUIPPED 100


class Character : public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];

	AMateria *unequipped[MAX_UNEQUIPPED]; // Array to hold unequipped Materia
	int unequippedCount; // Tracks the number of unequipped Materia
public:
		//-----------OCF-----------------//
		Character();								// * Constructor (default)
		Character(const std::string &name);			// * Constructor with parameter
		Character(const Character &src);			// * Copy constructor
		Character& operator=(const Character &src);	// * Copy assignment operator
		virtual ~Character();						// * Destructor
		//===============================//
		//-----------Methods------------//
		std::string const & getName() const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;
};

#endif // !CHARACTER_HPP
