/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 08:37:11 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/26 16:38:33 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include "../include/Colors.hpp"


WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << CYAN << "😺 WrongCat 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

// v.2
// WrongCat::WrongCat() {
//     type = "WrongCat";
//     std::cout << "WrongCat: Default constructor called" << std::endl;
// }

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
	std::cout << CYAN << "😺 WrongCat 🏗️  Constructor called for " << UBR << type << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << CYAN << "😺 WrongCat 🏗️  Copy Constructor called for " << UBR << type << RESET << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &copy)
{
	if (this == &copy)
	{
		std::cout << YELLOW << "⚠️ Self-assignment detected, no changes made!" << RESET << std::endl;
		return (*this);
	}
	WrongAnimal::operator=(copy);
	std::cout << CYAN << "😺 WrongCat © Copy Assignment operator called for " << UBR << type << RESET << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << RED << "😺 WrongCat 🧨 Destructor called for " << UBR << type << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "📣 Niaou Niaou i am a WrongCat 😺" << std::endl;
}
