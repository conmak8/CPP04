/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:05:24 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 15:33:45 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>


class Animal
{
protected:
		std::string type;
public:
		//-----------OCF-----------------//
		Animal();									// * Constructor (default)
		Animal(const std::string &name);			// * Constructor with parameters  ?? i need it?
		Animal(const Animal &copy);					// * Copy constructor
		Animal &operator= (const Animal &copy);		// * Copy assignment operator
		virtual ~Animal();							// * Destructor
		//===============================//
		//-----------Methods------------//
		std::string getType() const;
		virtual void makeSound(void) const;
};

#endif // !ANIMAL_HPP
