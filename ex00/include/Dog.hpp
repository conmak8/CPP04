/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:21:31 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 16:28:36 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
		//-----------OCF-----------------//
		Dog();									// * Constructor (default)
		Dog(const std::string &name);			// * Constructor with parameters
		Dog(const Dog &copy);					// * Copy constructor
		Dog &operator= (const Dog &copy);		// * Copy assignment operator
		~Dog();									// * Destructor
		//===============================//
		//-----------Methods------------//
		void makeSound(void) const override;
};

#endif // !DOG_HPP
