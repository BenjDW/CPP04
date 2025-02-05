/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 04:27:10 by bde-wits          #+#    #+#             */
/*   Updated: 2025/02/05 08:38:34 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "bzz bzz bzzzz bzzzz bzz bzz bzzzz bzzzz bzzz bzz bzzz bzzzz" << std::endl;
}

Animal::Animal()
{
	this->type = "petit scarabé";
}

Animal::Animal(std::string typ)
{
	this->type = typ;
}

Animal&	Animal::operator=(const Animal cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = cpy;
}

Animal::~Animal()
{
}