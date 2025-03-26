/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:39:35 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 15:15:51 by cmakario         ###   ########.fr       */
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
		Brain();									// * Constructor (default)
		Brain(const std::string &name);				// * Constructor with parameters
		Brain(const Brain &copy);					// * Copy constructor
		Brain &operator= (const Brain &copy);		// * Copy assignment operator
		~Brain();									// * Destructor
		//===============================//
		//-----------Methods------------//
		//----Setter-------------------//
		void setIdea(int index, const std::string &idea);
		//------------------Getter----//
		std::string getIdea(int index) const;
};

#endif // !BRAIN_HPP
