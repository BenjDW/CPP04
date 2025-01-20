/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 08:17:15 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/18 08:18:06 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "is magic , uuuhhh uuuhhh" << std::endl;
}

WrongAnimal::WrongAnimal()
{
	this->type = "petit pony";
}

WrongAnimal::WrongAnimal(std::string typ)
{
	this->type = typ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal()
{
}