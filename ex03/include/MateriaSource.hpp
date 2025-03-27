/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:07:34 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 11:33:45 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
private:
		AMateria* learnedMaterias[4];
public:
		//-----------OCF-----------------//
		MateriaSource();										// * Constructor
		MateriaSource(const MateriaSource &src);				// * Copy constructor
		MateriaSource& operator=(const MateriaSource &src);	// * Copy assignment operator
		virtual ~MateriaSource();								// * Destructor
		//===============================//
		//-----------Methods------------//
		void learnMateria(AMateria *m) override;
		AMateria* createMateria(std::string const &type) override;
};

#endif // !MATERIASOURCE_HPP
