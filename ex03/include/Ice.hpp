/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 08:35:32 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 08:57:16 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"


class Ice : public AMateria
{
public:
		//-----------OCF-----------------//
		Ice();									// * Constructor (default)
		Ice(const Ice &copy);					// * Copy constructor
		Ice &operator= (const Ice &copy);		// * Copy assignment operator
		virtual ~Ice();							// * Destructor
		//===============================//
		//-----------Methods------------//
		virtual AMateria *clone() const override;
		virtual void use(ICharacter &target) override;
};

#endif // !ICE_HPP
