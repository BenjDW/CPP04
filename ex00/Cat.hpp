/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:38:35 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/15 05:08:49 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define	CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string name);
		Cat(const Animal &cpy);
		~Cat();
		Cat	&operator=(const Cat cpy);
		void	makeSound() const;
	private:
};

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

#endif