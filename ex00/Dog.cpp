/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:36:49 by bde-wits          #+#    #+#             */
/*   Updated: 2025/02/05 08:37:15 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const
{
	std::cout << "aaaooooouuuuhhhhhh waf waf waf" << std::endl;
	std::cout << "aka asoutaie devant une meuf" << std::endl;
}

Dog&	Dog::operator=(const Dog cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

Dog::Dog(const Animal &cpy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = cpy;
}

Dog::Dog(std::string name) : Animal(name)
{
}

Dog::Dog() : Animal("Dog")
{
	// this->type = "Dog";
}

Dog::~Dog()
{
}
