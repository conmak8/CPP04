/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:24:47 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 09:41:11 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
protected:
		std::string type;
public:
		//-----------OCF-----------------//
		Cat();									// * Constructor (default)
		Cat(const std::string &name);			// * Constructor with parameters
		Cat(const Cat &copy);					// * Copy constructor
		Cat &operator= (const Cat &copy);		// * Copy assignment operator
		~Cat();									// * Destructor
		//===============================//
		//-----------Methods------------//
		void makeSound(void);
};

#endif // !CAT_HPP
