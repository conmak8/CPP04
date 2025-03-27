/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:21:31 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 21:39:22 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"


class Dog : public Animal
{
private:
		Brain *brain;
public:
		//-----------OCF-----------------//
		Dog();									// * Constructor (default)
		Dog(const std::string &name);			// * Constructor with parameters
		Dog(const Dog &copy);					// * Copy constructor
		Dog &operator= (const Dog &copy);		// * Copy assignment operator
		virtual ~Dog();							// * Destructor
		//===============================//
		//-----------Methods------------//
		void makeSound(void) const override;

		void setIdea(int index, const std::string &idea);
		void printIdeas() const;
};

#endif // !DOG_HPP
