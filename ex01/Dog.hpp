/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 00:30:57 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/18 08:08:24 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog &cpy);
		~Dog();
		Dog	&operator=(const Dog &cpy);
		std::string	getBrainIdea(int index) const;
		virtual void	makeSound() const;
	private:
		Brain*	tekno_sar;
};

// std::string Dog::getBrainIdea(int index) const
// {
//     if (tekno_sar && index < 100) // Vérifie que tekno_sar n'est pas nullptr et que l'index est valide
//         return (tekno_sar->ideas[index]);
//     return "Invalid index or Brain is not initialized";
// }

// void	Dog::makeSound() const
// {
// 	std::cout << "aaaooooouuuuhhhhhh waf waf waf" << std::endl;
// 	std::cout << "aka asoutaie devant une meuf" << std::endl;
// }

// Dog&	Dog::operator=(const Dog &cpy)
// {
// 	std::cout << "Copy assignment operator called" << std::endl;
// 	this->type = cpy.type;
// 	if (this->tekno_sar)
// 		delete(this->tekno_sar);
// 	// this->tekno_sar = cpy.tekno_sar;
// 	tekno_sar = new Brain();
// 	return (*this);
// }

// Dog::Dog(const Dog &cpy) : Animal("DOG")
// {
// 	std::cout << "copy DOG constructor called" << std::endl;
// 	this->tekno_sar = new Brain(*cpy.tekno_sar);
// 	//*this = cpy;
// }

// Dog::Dog(std::string name) : Animal(name)
// {
// 	this->tekno_sar = new Brain();
// }

// Dog::Dog() : Animal("Dog")
// {
// 	// this->type = "Dog";
// 	this->tekno_sar = new Brain();
// }

// Dog::~Dog()
// {
// 	delete(tekno_sar);
// }

#endif