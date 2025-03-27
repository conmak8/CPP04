/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 07:33:52 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/27 08:02:36 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
public:
 		virtual ~IMateriaSource() {}									// * Destructor
		//===============================//
		//-----------Methods------------//
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif // !IMATERIASOURCE_HPP
