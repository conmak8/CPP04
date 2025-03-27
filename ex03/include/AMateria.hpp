/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 07:49:45 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 20:02:31 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"


class AMateria
{
protected:
		std::string type;
public:
		//-----------OCF-----------------//
		AMateria();									// * Constructor (default)
		AMateria(std::string const &type);			// * Constructor with parameters
		AMateria(const AMateria &copy);				// * Copy constructor
		AMateria &operator= (const AMateria &copy); // * Copy assignment operator
		virtual ~AMateria();						// * Destructor
		//===============================//
		//-----------Methods------------//
		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif // !AMATERIA_HPP
