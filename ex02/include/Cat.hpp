/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:24:47 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 21:11:50 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"


class Cat : public A_Animal
{
private:
		Brain *brain;
public:
		//-----------OCF-----------------//
		Cat();									// * Constructor (default)
		Cat(const std::string &name);			// * Constructor with parameters
		Cat(const Cat &copy);					// * Copy constructor
		Cat &operator= (const Cat &copy);		// * Copy assignment operator
		virtual ~Cat();							// * Destructor
		//===============================//
		//-----------Methods------------//
		virtual void makeSound(void) const override;
};

#endif // !CAT_HPP
