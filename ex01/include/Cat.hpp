/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:24:47 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 19:44:47 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal, public Brain
{
public:
		//-----------OCF-----------------//
		Cat();									// * Constructor (default)
		// Cat(const std::string &name);			// * Constructor with parameters
		Cat(const Cat &copy);					// * Copy constructor
		Cat &operator= (const Cat &copy);		// * Copy assignment operator
		~Cat();									// * Destructor
		//===============================//
		//-----------Methods------------//
		void makeSound(void) const override;
};

#endif // !CAT_HPP
