/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 08:07:23 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/20 05:39:25 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

std::string Dog::getBrainIdea(int index) const
{
    if (tekno_sar && index < 100)
        return (tekno_sar->ideas[index]);
    return "Invalid index or Brain is not initialized";
}

void	Dog::makeSound() const
{
	std::cout << "aaaooooouuuuhhhhhh waf waf waf" << std::endl;
	std::cout << "aka asoutaie devant une meuf" << std::endl;
}

Dog&	Dog::operator=(const Dog &cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = cpy.type;
	if (this->tekno_sar)
		delete(this->tekno_sar);
	tekno_sar = new Brain();
	return (*this);
}

Dog::Dog(const Dog &cpy) : Animal("DOG")
{
	std::cout << "copy DOG constructor called" << std::endl;
	this->tekno_sar = new Brain(*cpy.tekno_sar);
}

Dog::Dog(std::string name) : Animal(name)
{
	this->tekno_sar = new Brain();
}

Dog::Dog() : Animal("Dog")
{
	this->tekno_sar = new Brain();
}

Dog::~Dog()
{
	delete(tekno_sar);
}