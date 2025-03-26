/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:05:24 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 16:34:37 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>


class A_Animal
{
protected:
		std::string type;
public:
		//-----------OCF-----------------//
		A_Animal();									// * Constructor (default)
		A_Animal(const std::string &name);			// * Constructor with parameters
		A_Animal(const A_Animal &copy);					// * Copy constructor
		A_Animal &operator= (const A_Animal &copy);		// * Copy assignment operator
		virtual ~A_Animal();							// * Destructor
		//===============================//
		//-----------Methods------------//
		virtual std::string getType() const;
		virtual void makeSound(void) const = 0;
};

#endif // !ANIMAL_HPP
