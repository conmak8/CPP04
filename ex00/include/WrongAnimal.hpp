/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:05:24 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 16:39:01 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
		std::string type;
public:
		//-----------OCF-----------------//
		WrongAnimal();										// * Constructor (default)
		WrongAnimal(const std::string &name);				// * Constructor with parameters  ?? i need it?
		WrongAnimal(const WrongAnimal &copy);				// * Copy constructor
		WrongAnimal &operator= (const WrongAnimal &copy);	// * Copy assignment operator
		virtual ~WrongAnimal();								// * Destructor
		//===============================//
		//-----------Methods------------//
		std::string getType() const;
		void makeSound(void) const;
};

#endif // !WRONGANIMAL_HPP
