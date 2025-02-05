/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:37:27 by bde-wits          #+#    #+#             */
/*   Updated: 2025/02/05 08:37:35 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound() const
{
	std::cout << "miaou miaou mia mia ou miaou" << std::endl;
	std::cout << "aka asoutaie pendant l'exam final" << std::endl;
}

Cat&	Cat::operator=(const Cat cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

Cat::Cat(const Animal &cpy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = cpy;
}

Cat::Cat(std::string name) : Animal(name)
{
}

Cat::Cat() : Animal("Cat")
{
	// this->type = "Cat";
}

Cat::~Cat()
{
}