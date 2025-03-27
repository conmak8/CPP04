/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 08:54:21 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 08:57:51 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"


class Cure : public AMateria
{
public:
		//-----------OCF-----------------//
		Cure();									// * Constructor (default)
		Cure(const Cure &copy);					// * Copy constructor
		Cure &operator= (const Cure &copy);		// * Copy assignment operator
		virtual ~Cure();						// * Destructor
		//===============================//
		//-----------Methods------------//
		virtual AMateria *clone() const override;
		virtual void use(ICharacter &target) override;
};

#endif // !CURE_HPP
