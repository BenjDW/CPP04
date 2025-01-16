/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 04:30:37 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/15 04:53:33 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& cpy);
		virtual ~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal cpy);
		virtual std::string	getType() const;
		void	makeSound() const;
	protected:
		std::string	type;
};

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

#endif