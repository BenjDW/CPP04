/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 08:18:33 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/20 05:45:28 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat&	WrongCat::operator=(const WrongCat cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

WrongCat::WrongCat(const WrongAnimal &cpy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = cpy;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong meow meow meow" << std::endl;
	std::cout << "aka asoutaie pendant l'exam final" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal (name)
{
}

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
}

WrongCat::~WrongCat()
{
}