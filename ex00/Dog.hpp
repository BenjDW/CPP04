/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 00:30:57 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/15 05:03:03 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string name);
		Dog(const Animal &cpy);
		~Dog();
		Dog	&operator=(const Dog cpy);
		virtual void	makeSound() const;
	private:
};

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

#endif