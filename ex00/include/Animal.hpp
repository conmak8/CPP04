/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:05:24 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 08:31:05 by cmakario         ###   ########.fr       */
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
		Animal(const std::string &name);			// * Constructor with parameters
		Animal(const Animal &copy);					// * Copy constructor
		Animal &operator= (const Animal &copy);		// * Copy assignment operator
		~Animal();									// * Destructor
		//===============================//
		//-----------Methods------------//
		void makeSound(void);
};

#endif // !ANIMAL_HPP
