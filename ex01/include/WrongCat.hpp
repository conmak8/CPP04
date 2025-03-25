/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:24:47 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 19:45:02 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
public:
		//-----------OCF-----------------//
		WrongCat();										// * Constructor (default)
		// WrongCat(const std::string &name);				// * Constructor with parameters
		WrongCat(const WrongCat &copy);					// * Copy constructor
		WrongCat &operator= (const WrongCat &copy);		// * Copy assignment operator
		~WrongCat();									// * Destructor
		//===============================//
		//-----------Methods------------//
		// std::string getType() const;
		void makeSound(void) const;
};

#endif // !WRONGCAT_HPP
