/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:39:35 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/25 20:22:55 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>


class Brain
{
protected:
	std::string ideas[100];
public:
		//-----------OCF-----------------//
		Brain();										// * Constructor (default)
		Brain(const std::string &name);				// * Constructor with parameters
		Brain(const Brain &copy);					// * Copy constructor
		Brain &operator= (const Brain &copy);		// * Copy assignment operator
		~Brain();									// * Destructor
		//===============================//
		//-----------Methods------------//
		//----Setter-------------------//
		void setIdea(size_t index, const std::string &idea);
		//------------------Getter----//
		std::string getIdea(size_t index) const;
}

#endif // !BRAIN_HPP
